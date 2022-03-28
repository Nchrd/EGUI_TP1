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
    void writeJson(QString username_m, QString password_p, QString mail_p);
    void jsonOpener(bool mode, QFile& users);
    void jsonUserParser(QString username_p, QString password_p, QJsonObject object, bool& login);
};

#endif // JSON_H
