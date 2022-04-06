#ifndef CREATEACCOUNTWINDOW_H
#define CREATEACCOUNTWINDOW_H

#include "json.h"
#include "blogwindow.h"

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

namespace Ui {
class CreateAccountWindow;
}

class CreateAccountWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAccountWindow(QWidget *parent = nullptr);
    ~CreateAccountWindow();

private slots:
    /**
     * @brief on_createAccountPushButton_clicked calls the function necessary to create a new account and login the new blog
     */
    void on_createAccountPushButton_clicked();

private:
    Ui::CreateAccountWindow *ui;
};

#endif // CREATEACCOUNTWINDOW_H
