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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlogWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BlogWindow)
    {
        if (BlogWindow->objectName().isEmpty())
            BlogWindow->setObjectName(QString::fromUtf8("BlogWindow"));
        BlogWindow->resize(800, 600);
        menubar = new QMenuBar(BlogWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        BlogWindow->setMenuBar(menubar);
        centralwidget = new QWidget(BlogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BlogWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BlogWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BlogWindow->setStatusBar(statusbar);

        retranslateUi(BlogWindow);

        QMetaObject::connectSlotsByName(BlogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BlogWindow)
    {
        BlogWindow->setWindowTitle(QCoreApplication::translate("BlogWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlogWindow: public Ui_BlogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOGWINDOW_H
