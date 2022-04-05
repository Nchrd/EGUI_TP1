#ifndef JSON_H
#define JSON_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonParseError>
#include <QIODevice>

#include <QCoreApplication>
#include <QString>
#include <QVariant>
#include <QFile>
#include <QByteArray>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QTextStream>

class json
{
public:
    json();
    void jsonUserReader(QString username_p, QString password_p, bool& login);
    void writeJson(QString username_m, QString password_p, QString confirmPassword_p, QString mail_p, bool& login);
    void jsonModeOpener(bool mode, QFile& users);
    void jsonUserOpener(bool mode, QJsonObject& data_file, QString username_p);
    void jsonLoginUserParser(QString username_p, QString password_p, QJsonObject object, bool& login);
    void jsonRegisterUserParser(QString username_p, QString password_p, QString confirmPassword_p, QString mail_p,  QJsonObject object, bool& login);
    void jsonAdapter(QFile& file);

    QJsonObject jsonConverter(QFile& user_file, QString username_p);

    void jsonBlogWriter(QString title, QString post, QString user, QDateTime date);
    void createBlog(QString username, QString blogTitle);
    void jsonBlogOpener(bool mode, QJsonObject& data_file, QString username_p);

};

#endif // JSON_H
