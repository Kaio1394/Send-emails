#include "sendemailspage.h"
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
