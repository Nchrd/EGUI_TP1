#ifndef CREATEACCOUNTWINDOW_H
#define CREATEACCOUNTWINDOW_H

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

namespace Ui {
class CreateAccountWindow;
}

class CreateAccountWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAccountWindow(QWidget *parent = nullptr);
    ~CreateAccountWindow();

    void writeJson(QString username_m, QString password_p, QString mail_p);

private slots:
    void on_createAccountPushButton_clicked();

private:
    Ui::CreateAccountWindow *ui;
};

#endif // CREATEACCOUNTWINDOW_H
