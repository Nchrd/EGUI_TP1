/********************************************************************************
** Form generated from reading UI file 'createaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNTWINDOW_H
#define UI_CREATEACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccountWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QMainWindow *CreateAccountWindow)
    {
        if (CreateAccountWindow->objectName().isEmpty())
            CreateAccountWindow->setObjectName(QString::fromUtf8("CreateAccountWindow"));
        CreateAccountWindow->resize(432, 299);
        centralwidget = new QWidget(CreateAccountWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);

        CreateAccountWindow->setCentralWidget(centralwidget);

        retranslateUi(CreateAccountWindow);

        QMetaObject::connectSlotsByName(CreateAccountWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CreateAccountWindow)
    {
        CreateAccountWindow->setWindowTitle(QCoreApplication::translate("CreateAccountWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("CreateAccountWindow", "Create an account !", nullptr));
        label->setText(QCoreApplication::translate("CreateAccountWindow", "Email :", nullptr));
        label_2->setText(QCoreApplication::translate("CreateAccountWindow", "Username :", nullptr));
        label_3->setText(QCoreApplication::translate("CreateAccountWindow", "Password :", nullptr));
        label_4->setText(QCoreApplication::translate("CreateAccountWindow", "Confirm password :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateAccountWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccountWindow: public Ui_CreateAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNTWINDOW_H
