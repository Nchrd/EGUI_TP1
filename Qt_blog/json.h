#ifndef JSON_H
#define JSON_H

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

class json
{
public:
    json();
    void jsonReader(QString username_p, QString password_p, bool& login);
    void writeJson(QString username_m, QString password_p, QString confirmPassword_p, QString mail_p, bool& login);
    void jsonModeOpener(bool mode, QFile& users);
    void jsonOpener(bool mode, QJsonObject& data_file);
    void jsonLoginUserParser(QString username_p, QString password_p, QJsonObject object, bool& login);
    void jsonRegisterUserParser(QString username_p, QString password_p, QString confirmPassword_p, QString mail_p, QJsonObject object, bool& login);
    QJsonObject jsonConverter(QFile& user_file);
};

#endif // JSON_H
