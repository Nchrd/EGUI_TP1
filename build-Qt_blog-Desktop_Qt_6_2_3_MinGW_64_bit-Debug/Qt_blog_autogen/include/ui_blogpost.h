/********************************************************************************
** Form generated from reading UI file 'blogpost.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOGPOST_H
#define UI_BLOGPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blogPost
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *shareLineEdit;
    QPushButton *sharePushButton;

    void setupUi(QMainWindow *blogPost)
    {
        if (blogPost->objectName().isEmpty())
            blogPost->setObjectName(QString::fromUtf8("blogPost"));
        blogPost->resize(209, 115);
        centralwidget = new QWidget(blogPost);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        shareLineEdit = new QLineEdit(centralwidget);
        shareLineEdit->setObjectName(QString::fromUtf8("shareLineEdit"));

        verticalLayout->addWidget(shareLineEdit);

        sharePushButton = new QPushButton(centralwidget);
        sharePushButton->setObjectName(QString::fromUtf8("sharePushButton"));

        verticalLayout->addWidget(sharePushButton);


        horizontalLayout->addLayout(verticalLayout);

        blogPost->setCentralWidget(centralwidget);

        retranslateUi(blogPost);

        QMetaObject::connectSlotsByName(blogPost);
    } // setupUi

    void retranslateUi(QMainWindow *blogPost)
    {
        blogPost->setWindowTitle(QCoreApplication::translate("blogPost", "MainWindow", nullptr));
        sharePushButton->setText(QCoreApplication::translate("blogPost", "Share !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class blogPost: public Ui_blogPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOGPOST_H
