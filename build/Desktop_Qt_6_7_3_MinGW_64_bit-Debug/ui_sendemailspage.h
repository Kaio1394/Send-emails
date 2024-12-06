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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *sender;
    QLabel *label_4;
    QLineEdit *to;
    QLabel *label_5;
    QLineEdit *subject;
    QTextEdit *body;
    QPushButton *pushButton;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *server;
    QLabel *label_2;
    QLineEdit *port;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
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
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        sender = new QLineEdit(tab);
        sender->setObjectName("sender");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sender);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        to = new QLineEdit(tab);
        to->setObjectName("to");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, to);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        subject = new QLineEdit(tab);
        subject->setObjectName("subject");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, subject);


        verticalLayout_4->addLayout(formLayout_2);

        body = new QTextEdit(tab);
        body->setObjectName("body");

        verticalLayout_4->addWidget(body);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);

        tabWidget_config->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(tab_3);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        server = new QLineEdit(tab_3);
        server->setObjectName("server");

        formLayout->setWidget(0, QFormLayout::FieldRole, server);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        port = new QLineEdit(tab_3);
        port->setObjectName("port");

        formLayout->setWidget(1, QFormLayout::FieldRole, port);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget_config->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget_config->addTab(tab_2, QString());

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

        tabWidget_config->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SendEmailsPage);
    } // setupUi

    void retranslateUi(QMainWindow *SendEmailsPage)
    {
        SendEmailsPage->setWindowTitle(QCoreApplication::translate("SendEmailsPage", "SendEmailsPage", nullptr));
        label_3->setText(QCoreApplication::translate("SendEmailsPage", "Sender: ", nullptr));
        sender->setText(QString());
        label_4->setText(QCoreApplication::translate("SendEmailsPage", "To:", nullptr));
        label_5->setText(QCoreApplication::translate("SendEmailsPage", "Subject: ", nullptr));
        pushButton->setText(QCoreApplication::translate("SendEmailsPage", "Send", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab), QCoreApplication::translate("SendEmailsPage", "Email", nullptr));
        label->setText(QCoreApplication::translate("SendEmailsPage", "Server: ", nullptr));
        label_2->setText(QCoreApplication::translate("SendEmailsPage", "Port: ", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab_3), QCoreApplication::translate("SendEmailsPage", "Config", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab_2), QCoreApplication::translate("SendEmailsPage", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmailsPage: public Ui_SendEmailsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAILSPAGE_H
