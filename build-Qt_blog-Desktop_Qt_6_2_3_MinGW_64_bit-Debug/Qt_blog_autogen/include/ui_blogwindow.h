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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlogWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *profilePicLabel;
    QLabel *helloLabel;
    QPushButton *deletePostPushButton;
    QPushButton *postPushButton;
    QPushButton *disconnectPushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *postLineEdit;
    QListWidget *blogListWidget;

    void setupUi(QMainWindow *BlogWindow)
    {
        if (BlogWindow->objectName().isEmpty())
            BlogWindow->setObjectName(QString::fromUtf8("BlogWindow"));
        BlogWindow->resize(870, 609);
        centralwidget = new QWidget(BlogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        profilePicLabel = new QLabel(centralwidget);
        profilePicLabel->setObjectName(QString::fromUtf8("profilePicLabel"));
        profilePicLabel->setMaximumSize(QSize(100, 100));
        profilePicLabel->setPixmap(QPixmap(QString::fromUtf8(":/rec/images/profile_pic.png")));
        profilePicLabel->setScaledContents(true);

        verticalLayout->addWidget(profilePicLabel);

        helloLabel = new QLabel(centralwidget);
        helloLabel->setObjectName(QString::fromUtf8("helloLabel"));
        helloLabel->setMaximumSize(QSize(16777215, 50));
        helloLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(helloLabel);

        deletePostPushButton = new QPushButton(centralwidget);
        deletePostPushButton->setObjectName(QString::fromUtf8("deletePostPushButton"));

        verticalLayout->addWidget(deletePostPushButton);


        verticalLayout_2->addLayout(verticalLayout);

        postPushButton = new QPushButton(centralwidget);
        postPushButton->setObjectName(QString::fromUtf8("postPushButton"));

        verticalLayout_2->addWidget(postPushButton);

        disconnectPushButton = new QPushButton(centralwidget);
        disconnectPushButton->setObjectName(QString::fromUtf8("disconnectPushButton"));

        verticalLayout_2->addWidget(disconnectPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        postLineEdit = new QLineEdit(centralwidget);
        postLineEdit->setObjectName(QString::fromUtf8("postLineEdit"));

        verticalLayout_3->addWidget(postLineEdit);

        blogListWidget = new QListWidget(centralwidget);
        blogListWidget->setObjectName(QString::fromUtf8("blogListWidget"));

        verticalLayout_3->addWidget(blogListWidget);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        BlogWindow->setCentralWidget(centralwidget);

        retranslateUi(BlogWindow);

        QMetaObject::connectSlotsByName(BlogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BlogWindow)
    {
        BlogWindow->setWindowTitle(QCoreApplication::translate("BlogWindow", "Your blog", nullptr));
        profilePicLabel->setText(QString());
        helloLabel->setText(QCoreApplication::translate("BlogWindow", "Hello !", nullptr));
        deletePostPushButton->setText(QCoreApplication::translate("BlogWindow", "Delete a post", nullptr));
        postPushButton->setText(QCoreApplication::translate("BlogWindow", "Create a post", nullptr));
        disconnectPushButton->setText(QCoreApplication::translate("BlogWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlogWindow: public Ui_BlogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOGWINDOW_H
