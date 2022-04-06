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
    /**
     * @brief json default constructor
     */
    json();

    /**
     * @brief jsonUserReader calls the function necessary to login
     * @param username_p username to login with
     * @param password_p password to login with
     * @param login boolean that indicates if we can login or not depending on username and password
     */
    void jsonUserReader(QString username_p, QString password_p, bool& login);

    /**
     * @brief writeJson write in JSON file the new user's data to allow him to login next time (after checking that we can do it)
     * @param username_m new username
     * @param password_p new password
     * @param confirmPassword_p check if password was written correctly (force user to write it a second time)
     * @param mail_p new mail
     * @param login boolean that indicates if we can register or not depending on username, password and mail
     */
    void writeJson(QString username_m, QString password_p, QString confirmPassword_p, QString mail_p, bool& login);

    /**
     * @brief jsonModeOpener opens a file depending on WriteOnly or ReadOnly modes
     * @param mode boolean : true = write and false = read
     * @param users file to open
     */
    void jsonModeOpener(bool mode, QFile& users);

    /**
     * @brief jsonUserOpener calls jsonModeOpener to open users list file and then puts the data into a JSonObject
     * @param mode boolean : true = write and false = read
     * @param data_file Get the user's data from file
     * @param username_p user to take data from
     */
    void jsonUserOpener(bool mode, QJsonObject& data_file, QString username_p);

    /**
     * @brief jsonLoginUserParser Parse the user JSON file to verify that the user wrote good credentials
     * @param username_p username to check
     * @param password_p password to check
     * @param object Data from file to compare with
     * @param login boolean that indicates if we can login or not depending on username and password
     */
    void jsonLoginUserParser(QString username_p, QString password_p, QJsonObject object, bool& login);

    /**
     * @brief jsonRegisterUserParser Parse the user JSON file to verify that the user wrote good credentials to register into the blog (called by writeJson)
     * @param username_p new username to check the usability
     * @param password_p new password
     * @param confirmPassword_p check if new password was written correctly
     * @param mail_p new mail to be check for usability
     * @param object
     * @param login
     */
    void jsonRegisterUserParser(QString username_p, QString password_p, QString confirmPassword_p, QString mail_p,  QJsonObject object, bool& login);

    /**
     * @brief jsonAdapter Adapt the JSON file structure to make data more readable
     * @param file file to adapt
     */
    void jsonAdapter(QFile& file);


    /**
     * @brief jsonConverter convert user's data from file to JsonObject
     * @param user_file file to take data from
     * @param username_p user to convert data from
     * @return
     */
    QJsonObject jsonConverter(QFile& user_file, QString username_p);


    /**
     * @brief jsonBlogWriter Edit the blog data file to implement new entries
     * @param title title of the entry
     * @param post content of the entry
     * @param user username of the user that make the entry
     * @param date time of the entry
     */
    void jsonBlogWriter(QString title, QString post, QString user, QDateTime date);

    /**
     * @brief createBlog Create a new blog when a user create a new account
     * @param username user's username that create a new blog
     * @param blogTitle title of his blog (title is used to create Blog ID)
     */
    void createBlog(QString username, QString blogTitle);

    /**
     * @brief jsonBlogOpener Open in a JsonObject from the Blog Json file an existing blog from an existing user
     * @param mode : true = write, false = read
     * @param data_file jsonObject that receive data
     * @param username_p user's username that we want to take the data from
     */
    void jsonBlogOpener(bool mode, QJsonObject& data_file, QString username_p);

};

#endif // JSON_H
