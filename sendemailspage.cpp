#include "sendemailspage.h"
#include "qfileinfo.h"
#include "src/mimeattachment.h"
#include "src/mimemessage.h"
#include "src/mimetext.h"
#include "src/smtpclient.h"
#include "ui_sendemailspage.h"
#include <filesystem>
#include <iostream>
#include <thread>
#include <mutex>


namespace fs = std::filesystem;

SendEmailsPage::SendEmailsPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SendEmailsPage)
{
    this->setFixedSize(400, 400);
    ui->setupUi(this);
    ui->pathDirFiles->setEnabled(false);
    ui->qtdy_threads->setEnabled(false);
}

SendEmailsPage::~SendEmailsPage()
{
    delete ui;
}
void SendEmailsPage::initValuesFields(){
    sender = ui->sender->text();
    to = ui->to->text();
    server = ui->server->text();
    port =  ui->port->text();
    body = ui->body->toPlainText();
    subject = ui->subject->text();
    qtyThreads = ui->qtdy_threads->text();
}
void SendEmailsPage::sendOnlyOneEmail(){

    if (this->server.isEmpty() || this->port.isEmpty()) {
        ui->statusbar->showMessage("Fields server and ports are mandatory!");
        return;
    }

    MimeMessage message;

    EmailAddress sender(this->sender);
    message.setSender(sender);

    EmailAddress to(this->to);
    message.addRecipient(to);

    message.setSubject(this->subject);

    MimeText text;

    text.setText(this->body);

    message.addPart(&text);

    SmtpClient smtp(server, port.toInt(), SmtpClient::TcpConnection);

    smtp.connectToHost();
    if (!smtp.waitForReadyConnected()) {
        ui->statusbar->showMessage("Failed to connect to host!");
        return;
    }
    smtp.login("", "");
    if (!smtp.waitForAuthenticated()) {
        ui->statusbar->showMessage("Failed to login!");
        return;
    }
    smtp.sendMail(message);
    if (!smtp.waitForMailSent()) {
        ui->statusbar->showMessage("Failed to send mail!");
        return;
    }
    smtp.quit();
    ui->statusbar->showMessage("Email send with successfull!");

}
void SendEmailsPage::sendMultiplyEmails(){

    if (this->server.isEmpty() || this->port.isEmpty()) {
        ui->statusbar->showMessage("Fields server and ports are mandatory!");
        return;
    }

    QString pathFiles = ui->pathDirFiles->text();
    std::string pathStr = pathFiles.toStdString();
    std::vector<std::string> files = getFiles(pathStr);
    for(const auto& file : files){
        MimeMessage message;
        QFile* f = new QFile(QString::fromStdString(file));
        MimeAttachment* attachment = new MimeAttachment(f);
        message.addPart(attachment);

        EmailAddress sender(this->sender);
        message.setSender(sender);

        EmailAddress to(this->to);
        message.addRecipient(to);

        message.setSubject(this->subject);

        MimeText text;
        text.setText(this->body);
        message.addPart(&text);

        SmtpClient smtp(server, port.toInt(), SmtpClient::TcpConnection);

        smtp.connectToHost();
        if (!smtp.waitForReadyConnected()) {
            ui->statusbar->showMessage("Failed to connect to host!");
            return;
        }

        smtp.login("", "");
        if (!smtp.waitForAuthenticated()) {
            ui->statusbar->showMessage("Failed to login!");
            return;
        }

        smtp.sendMail(message);
        if (!smtp.waitForMailSent()) {
            ui->statusbar->showMessage("Failed to send mail!");
            return;
        }

        smtp.quit();
        ui->statusbar->showMessage("Emails send with successfull!");
    }
}
void SendEmailsPage::sendMultiplyEmailsWithThreads() {
    QString pathFiles = ui->pathDirFiles->text();
    std::string pathStr = pathFiles.toStdString();
    std::vector<std::string> files = getFiles(pathStr);

    if (files.empty()) {
        ui->statusbar->showMessage("No files found in the directory!");
        return;
    }

    QString senderStr = this->sender;
    QString toStr = this->to;
    QString subjectStr = this->subject;
    QString bodyStr = this->body;
    QString serverStr = this->server;
    int portInt = this->port.toInt();
    int qtdyThreads = this->qtyThreads.toInt();

    std::mutex mtx;
    std::vector<std::thread> threads;
    std::atomic<int> activeThreads(0);  // Controle do número de threads ativas.

    for (size_t i = 0; i < files.size(); ++i) {
        // Criar e iniciar a thread
        threads.push_back(std::thread([file = files[i], senderStr, toStr, subjectStr, bodyStr, serverStr, portInt, &mtx, &activeThreads, qtdyThreads]() {
            // Simula o delay de 30 segundos antes de processar o envio de e-mails.
            qDebug() << "Thread started for file:" << QString::fromStdString(file);
            std::this_thread::sleep_for(std::chrono::seconds(30));  // Atraso de 30 segundos

            // Garantir que as threads não bloqueiem umas às outras ao acessar recursos compartilhados
            std::unique_lock<std::mutex> lock(mtx);

            MimeMessage message;
            QFile* f = new QFile(QString::fromStdString(file));
            MimeAttachment* attachment = new MimeAttachment(f);
            message.addPart(attachment);

            EmailAddress sender(senderStr);
            message.setSender(sender);

            EmailAddress to(toStr);
            message.addRecipient(to);

            message.setSubject(subjectStr);

            MimeText text;
            text.setText(bodyStr);
            message.addPart(&text);

            SmtpClient smtp(serverStr, portInt, SmtpClient::TcpConnection);

            smtp.connectToHost();
            if (!smtp.waitForReadyConnected()) {
                return;
            }

            smtp.login("", "");
            if (!smtp.waitForAuthenticated()) {
                return;
            }

            smtp.sendMail(message);
            if (!smtp.waitForMailSent()) {
                return;
            }

            smtp.quit();
            qDebug() << "Email enviado: " << QString::fromStdString(file);

            --activeThreads;
        }));

        ++activeThreads;

        if (activeThreads >= qtdyThreads) {
            while (activeThreads >= qtdyThreads) {
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
    }

    // Aguarda o término de todas as threads restantes
    for (auto& th : threads) {
        if (th.joinable()) {
            th.join();
        }
    }

    ui->statusbar->showMessage("Emails sent successfully!");
}


std::vector<std::string> SendEmailsPage::getFiles(std::string path){
    std::vector<std::string> listFiles;
    try {
        if (fs::exists(path) && fs::is_directory(path)) {
            for (const auto& entry : fs::directory_iterator(path)) {
                if (fs::is_regular_file(entry.status())) {
                    listFiles.push_back(entry.path().string());
                }
            }
        } else {
            std::cerr << "Directory does not exist or is not a directory!\n";
        }
    } catch (const fs::filesystem_error& ex) {
        std::cerr << "Filesystem error: " << ex.what() << "\n";
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
    }
    return listFiles;
}
void SendEmailsPage::on_pushButton_clicked()
{
    initValuesFields();
    if(ui->checkBox_attach->checkState() == Qt::Checked && !ui->pathDirFiles->text().isEmpty()){
        sendMultiplyEmails();
    }
    else if(ui->checkBox_attach->checkState() != Qt::Checked && ui->pathDirFiles->text().isEmpty()){
        sendOnlyOneEmail();
    }else if(ui->checkBox_Threads->isChecked()){
        sendMultiplyEmailsWithThreads();
    }
}


void SendEmailsPage::on_checkBox_attach_stateChanged(int state)
{
    ui->pathDirFiles->setEnabled(state == Qt::Checked);
}


void SendEmailsPage::on_checkBox_Threads_stateChanged(int state)
{
    ui->qtdy_threads->setEnabled(state == Qt::Checked);
}

