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

private:
    Ui::SendEmailsPage *ui;

};
#endif // SENDEMAILSPAGE_H
