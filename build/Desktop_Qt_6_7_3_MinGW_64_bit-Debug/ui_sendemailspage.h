/********************************************************************************
** Form generated from reading UI file 'sendemailspage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDEMAILSPAGE_H
#define UI_SENDEMAILSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendEmailsPage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SendEmailsPage)
    {
        if (SendEmailsPage->objectName().isEmpty())
            SendEmailsPage->setObjectName("SendEmailsPage");
        SendEmailsPage->resize(800, 600);
        centralwidget = new QWidget(SendEmailsPage);
        centralwidget->setObjectName("centralwidget");
        SendEmailsPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SendEmailsPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        SendEmailsPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SendEmailsPage);
        statusbar->setObjectName("statusbar");
        SendEmailsPage->setStatusBar(statusbar);

        retranslateUi(SendEmailsPage);

        QMetaObject::connectSlotsByName(SendEmailsPage);
    } // setupUi

    void retranslateUi(QMainWindow *SendEmailsPage)
    {
        SendEmailsPage->setWindowTitle(QCoreApplication::translate("SendEmailsPage", "SendEmailsPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmailsPage: public Ui_SendEmailsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAILSPAGE_H
