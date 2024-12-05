#include "sendemailspage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icons/Email.ico"));

    SendEmailsPage w;
    w.setWindowTitle("Send Emails");
    w.show();
    return a.exec();
}
