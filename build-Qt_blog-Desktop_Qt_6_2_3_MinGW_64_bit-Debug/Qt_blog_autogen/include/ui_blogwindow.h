/********************************************************************************
** Form generated from reading UI file 'blogwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOGWINDOW_H
#define UI_BLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlogWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *profilePicLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *helloLabel;
    QLabel *usernameLabel;
    QLabel *label;

    void setupUi(QMainWindow *BlogWindow)
    {
        if (BlogWindow->objectName().isEmpty())
            BlogWindow->setObjectName(QString::fromUtf8("BlogWindow"));
        BlogWindow->resize(870, 609);
        centralwidget = new QWidget(BlogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(210, 70, 441, 521));
        profilePicLabel = new QLabel(centralwidget);
        profilePicLabel->setObjectName(QString::fromUtf8("profilePicLabel"));
        profilePicLabel->setGeometry(QRect(60, 70, 63, 51));
        profilePicLabel->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 120, 119, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        helloLabel = new QLabel(layoutWidget);
        helloLabel->setObjectName(QString::fromUtf8("helloLabel"));

        horizontalLayout->addWidget(helloLabel);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        BlogWindow->setCentralWidget(centralwidget);

        retranslateUi(BlogWindow);

        QMetaObject::connectSlotsByName(BlogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BlogWindow)
    {
        BlogWindow->setWindowTitle(QCoreApplication::translate("BlogWindow", "MainWindow", nullptr));
        profilePicLabel->setText(QString());
        helloLabel->setText(QCoreApplication::translate("BlogWindow", "Hello", nullptr));
        usernameLabel->setText(QCoreApplication::translate("BlogWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("BlogWindow", "!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlogWindow: public Ui_BlogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOGWINDOW_H
