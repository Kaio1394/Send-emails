#ifndef SENDEMAILSPAGE_H
#define SENDEMAILSPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SendEmailsPage;
}
QT_END_NAMESPACE

class SendEmailsPage : public QMainWindow
{
    Q_OBJECT

public:
    SendEmailsPage(QWidget *parent = nullptr);
    ~SendEmailsPage();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_attach_stateChanged(int);
    void sendOnlyOneEmail();
    void sendMultiplyEmails();
    void sendMultiplyEmailsWithThreads();
    void on_checkBox_Threads_stateChanged(int arg1);

private:
    Ui::SendEmailsPage *ui;
    QString sender;
    QString to;
    QString server;
    QString port;
    QString body;
    QString subject;
    QString qtyThreads;
    void initValuesFields();
    std::vector<std::string> getFiles(std::string);
};
#endif // SENDEMAILSPAGE_H
