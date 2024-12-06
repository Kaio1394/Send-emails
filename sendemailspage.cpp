#include "sendemailspage.h"
#include "src/mimemessage.h"
#include "src/mimetext.h"
#include "src/smtpclient.h"
#include "ui_sendemailspage.h"

SendEmailsPage::SendEmailsPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SendEmailsPage)
{
    this->setFixedSize(400, 300);
    ui->setupUi(this);
}

SendEmailsPage::~SendEmailsPage()
{
    delete ui;
}

void SendEmailsPage::on_pushButton_clicked()
{
    QString s = ui->sender->text();
    QString t = ui->to->text();
    QString subject = ui->subject->text();

    QString body = ui->body->toPlainText();

    QString server = ui->server->text();
    QString port = ui->port->text();

    if (server.isEmpty() || port.isEmpty()) {
        ui->statusbar->showMessage("Fields server and ports are mandatory!");
        return;
    }

    MimeMessage message;

    EmailAddress sender(s);
    message.setSender(sender);

    EmailAddress to(t);
    message.addRecipient(to);

    message.setSubject(subject);

    MimeText text;

    text.setText(body);

    message.addPart(&text);

    SmtpClient smtp(server, port.toInt(), SmtpClient::TcpConnection);

    smtp.connectToHost();
    if (!smtp.waitForReadyConnected()) {
        ui->statusbar->showMessage("Failed to connect to host!");
        return;
    }

    smtp.login("kaio.teste@hotmail.com", "Jkym139413$$");
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
}

