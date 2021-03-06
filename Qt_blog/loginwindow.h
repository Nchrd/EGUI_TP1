#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "blogwindow.h"
#include "createaccountwindow.h"
#include "json.h"

#include <QMainWindow>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonParseError>

#include <QCoreApplication>
#include <QString>
#include <QVariant>
#include <QFile>
#include <QByteArray>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QPixmap>
#include <QPalette>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    /**
     * @brief on_loginPushButton_clicked calls functions to login into the user's blog
     */
    void on_loginPushButton_clicked();

    /**
     * @brief on_createPushButton_clicked calls functions to open the window that allow the user to create a new account and blog
     */
    void on_createPushButton_clicked();

    /**
     * @brief on_passwordPushButton_clicked allows the user to either show or hide his password when typing it
     */
    void on_passwordPushButton_clicked();

private:
    Ui::LoginWindow *ui;
    int swap;
};
#endif // LOGINWINDOW_H
