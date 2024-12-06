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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *sender;
    QLabel *label_4;
    QLineEdit *to;
    QLabel *label_5;
    QLineEdit *subject;
    QFormLayout *formLayout_3;
    QCheckBox *checkBox_Threads;
    QLineEdit *qtdy_threads;
    QCheckBox *checkBox_attach;
    QLineEdit *pathDirFiles;
    QTextEdit *body;
    QPushButton *pushButton;
    QWidget *tab_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *server;
    QLabel *label_2;
    QLineEdit *port;
    QWidget *widget1;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SendEmailsPage)
    {
        if (SendEmailsPage->objectName().isEmpty())
            SendEmailsPage->setObjectName("SendEmailsPage");
        SendEmailsPage->resize(455, 361);
        centralwidget = new QWidget(SendEmailsPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget_config = new QTabWidget(centralwidget);
        tabWidget_config->setObjectName("tabWidget_config");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
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


        verticalLayout_2->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        checkBox_Threads = new QCheckBox(tab);
        checkBox_Threads->setObjectName("checkBox_Threads");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, checkBox_Threads);

        qtdy_threads = new QLineEdit(tab);
        qtdy_threads->setObjectName("qtdy_threads");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, qtdy_threads);

        checkBox_attach = new QCheckBox(tab);
        checkBox_attach->setObjectName("checkBox_attach");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, checkBox_attach);

        pathDirFiles = new QLineEdit(tab);
        pathDirFiles->setObjectName("pathDirFiles");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pathDirFiles);


        verticalLayout_2->addLayout(formLayout_3);

        body = new QTextEdit(tab);
        body->setObjectName("body");

        verticalLayout_2->addWidget(body);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        tabWidget_config->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        widget = new QWidget(tab_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 10, 302, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        server = new QLineEdit(widget);
        server->setObjectName("server");

        horizontalLayout->addWidget(server);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        port = new QLineEdit(widget);
        port->setObjectName("port");

        horizontalLayout->addWidget(port);

        widget1 = new QWidget(tab_3);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(11, 71, 172, 56));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

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
        checkBox_Threads->setText(QCoreApplication::translate("SendEmailsPage", "Threads", nullptr));
        checkBox_attach->setText(QCoreApplication::translate("SendEmailsPage", "Attachment Files", nullptr));
        pushButton->setText(QCoreApplication::translate("SendEmailsPage", "Send", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab), QCoreApplication::translate("SendEmailsPage", "Email", nullptr));
        label->setText(QCoreApplication::translate("SendEmailsPage", "Server: ", nullptr));
        label_2->setText(QCoreApplication::translate("SendEmailsPage", "Port: ", nullptr));
        label_6->setText(QCoreApplication::translate("SendEmailsPage", "User: ", nullptr));
        label_7->setText(QCoreApplication::translate("SendEmailsPage", "Password: ", nullptr));
        tabWidget_config->setTabText(tabWidget_config->indexOf(tab_3), QCoreApplication::translate("SendEmailsPage", "Config", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmailsPage: public Ui_SendEmailsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAILSPAGE_H
