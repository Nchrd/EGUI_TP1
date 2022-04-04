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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlogWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *profilePicLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *helloLabel;
    QLabel *label_2;
    QLabel *usernameLabel;
    QVBoxLayout *verticalLayout;
    QPushButton *deletePostPushButton;
    QPushButton *postPushButton;
    QPushButton *disconnectPushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *titleLineEdit;
    QTextEdit *postTextEdit;
    QListWidget *blogListWidget;

    void setupUi(QMainWindow *BlogWindow)
    {
        if (BlogWindow->objectName().isEmpty())
            BlogWindow->setObjectName(QString::fromUtf8("BlogWindow"));
        BlogWindow->resize(870, 609);
        centralwidget = new QWidget(BlogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        profilePicLabel = new QLabel(centralwidget);
        profilePicLabel->setObjectName(QString::fromUtf8("profilePicLabel"));
        profilePicLabel->setMaximumSize(QSize(100, 100));
        profilePicLabel->setPixmap(QPixmap(QString::fromUtf8(":/rec/images/profile_pic.png")));
        profilePicLabel->setScaledContents(true);

        verticalLayout_2->addWidget(profilePicLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        helloLabel = new QLabel(centralwidget);
        helloLabel->setObjectName(QString::fromUtf8("helloLabel"));
        helloLabel->setMaximumSize(QSize(16777215, 50));
        helloLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(helloLabel);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(usernameLabel);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        deletePostPushButton = new QPushButton(centralwidget);
        deletePostPushButton->setObjectName(QString::fromUtf8("deletePostPushButton"));

        verticalLayout->addWidget(deletePostPushButton);

        postPushButton = new QPushButton(centralwidget);
        postPushButton->setObjectName(QString::fromUtf8("postPushButton"));

        verticalLayout->addWidget(postPushButton);

        disconnectPushButton = new QPushButton(centralwidget);
        disconnectPushButton->setObjectName(QString::fromUtf8("disconnectPushButton"));

        verticalLayout->addWidget(disconnectPushButton);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));

        verticalLayout_3->addWidget(titleLineEdit);

        postTextEdit = new QTextEdit(centralwidget);
        postTextEdit->setObjectName(QString::fromUtf8("postTextEdit"));
        postTextEdit->setMaximumSize(QSize(16777215, 100));
        postTextEdit->setLineWrapMode(QTextEdit::WidgetWidth);

        verticalLayout_3->addWidget(postTextEdit);

        blogListWidget = new QListWidget(centralwidget);
        blogListWidget->setObjectName(QString::fromUtf8("blogListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(blogListWidget->sizePolicy().hasHeightForWidth());
        blogListWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        blogListWidget->setFont(font);
        blogListWidget->setFocusPolicy(Qt::StrongFocus);
        blogListWidget->setMovement(QListView::Static);
        blogListWidget->setResizeMode(QListView::Fixed);

        verticalLayout_3->addWidget(blogListWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        BlogWindow->setCentralWidget(centralwidget);

        retranslateUi(BlogWindow);

        QMetaObject::connectSlotsByName(BlogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BlogWindow)
    {
        BlogWindow->setWindowTitle(QCoreApplication::translate("BlogWindow", "Your blog", nullptr));
        profilePicLabel->setText(QString());
        helloLabel->setText(QCoreApplication::translate("BlogWindow", "Hello ", nullptr));
        label_2->setText(QCoreApplication::translate("BlogWindow", "!", nullptr));
        usernameLabel->setText(QString());
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
