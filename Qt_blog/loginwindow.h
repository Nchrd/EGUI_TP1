#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

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

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    void jsonWriter(QString username_p, QString password_p);
    void jsonReader(QString username_p, QString password_p, bool& login);

private slots:
    void on_loginPushButton_clicked();

    void on_createPushButton_clicked();

    void on_passwordPushButton_clicked();

private:
    Ui::LoginWindow *ui;
    int swap;
};
#endif // LOGINWINDOW_H
