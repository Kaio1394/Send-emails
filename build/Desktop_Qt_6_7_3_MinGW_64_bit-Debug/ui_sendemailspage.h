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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendEmailsPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_config;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SendEmailsPage)
    {
        if (SendEmailsPage->objectName().isEmpty())
            SendEmailsPage->setObjectName("SendEmailsPage");
        SendEmailsPage->resize(455, 302);
        centralwidget = new QWidget(SendEmailsPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget_config = new QTabWidget(centralwidget);
        tabWidget_config->setObjectName("tabWidget_config");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget_config->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget_config->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget_config->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget_config);

        SendEmailsPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SendEmailsPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 455, 21));
        SendEmailsPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SendEmailsPage);
        statusbar->setObjectName("statusbar");
        SendEmailsPage->setStatusBar(statusbar);

        retranslateUi(SendEmailsPage);

        tabWidget_config->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SendEmailsPage);
    } // setupUi

    void retranslateUi(QMainWindow *SendEmailsPage)
    {
        SendEmailsPage->setWindowTitle(QCoreApplication::translate("SendEmailsPage", "SendEmailsPage", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab), QCoreApplication::translate("SendEmailsPage", "Email", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab_2), QCoreApplication::translate("SendEmailsPage", "Tab 2", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab_3), QCoreApplication::translate("SendEmailsPage", "Config", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmailsPage: public Ui_SendEmailsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAILSPAGE_H
