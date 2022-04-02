/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *loginGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *passwordPushButton;
    QVBoxLayout *verticalLayout;
    QPushButton *loginPushButton;
    QPushButton *createPushButton;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(354, 216);
        LoginWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        loginGroupBox = new QGroupBox(centralwidget);
        loginGroupBox->setObjectName(QString::fromUtf8("loginGroupBox"));
        loginGroupBox->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(38, 38, 38, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        QBrush brush2(QColor(218, 218, 218, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(17, 17, 17, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        QBrush brush4(QColor(164, 166, 168, 96));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        loginGroupBox->setPalette(palette);
        horizontalLayout_3 = new QHBoxLayout(loginGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        usernameLabel = new QLabel(loginGroupBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(loginGroupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        horizontalLayout->addWidget(usernameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passwordLabel = new QLabel(loginGroupBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(loginGroupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);

        passwordPushButton = new QPushButton(loginGroupBox);
        passwordPushButton->setObjectName(QString::fromUtf8("passwordPushButton"));
        QFont font;
        font.setPointSize(7);
        passwordPushButton->setFont(font);

        horizontalLayout_2->addWidget(passwordPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginPushButton = new QPushButton(loginGroupBox);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));

        verticalLayout->addWidget(loginPushButton);

        createPushButton = new QPushButton(loginGroupBox);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));
        QFont font1;
        font1.setPointSize(8);
        createPushButton->setFont(font1);

        verticalLayout->addWidget(createPushButton);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(loginGroupBox);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "The EGUI Blog", nullptr));
        loginGroupBox->setTitle(QCoreApplication::translate("LoginWindow", "Login to the EGUI Blog !", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginWindow", "Password ", nullptr));
        passwordPushButton->setText(QCoreApplication::translate("LoginWindow", "Show password", nullptr));
        loginPushButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        createPushButton->setText(QCoreApplication::translate("LoginWindow", "You have no account ? Create one !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
