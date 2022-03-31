#include "json.h"

json::json()
{

}

void json::jsonReader(QString username_p, QString password_p, bool& login){

        //Open the Json file
        QString path = ":/rec/json/users.json";
        QFile user_file(path);
        this->jsonOpener(false, user_file);

        //Convert the QString text to Bytearray first
        QByteArray jsonData ;
        jsonData = user_file.readAll();
        user_file.close();

        //Debug
        //if(jsonData.isEmpty() == false) qDebug() << "JSon file not empty";

        //Assign the json text to a JSON object
        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);

        //Debug
        //if(jsonDocument.isObject() == true) qDebug() << "It a JSON object";

        //Then get the main JSON object and get the datas in it
        QJsonObject object = jsonDocument.object();

        jsonUserParser(username_p, password_p, object, login);
}

void json::writeJson(QString username_m, QString password_p, QString mail_p){

    //Open the Json file
    QString path = ":/rec/json/users.json";
    QFile user_file(path);
    this->jsonOpener(true, user_file);

}

void json::jsonOpener(bool mode, QFile& users){
    //True = write
    //False = read
    if(mode == true){
        if(users.open(QIODevice::WriteOnly)){
                qDebug() << "Json file opened";
            }
    } else if(mode == false) {
        if(users.open(QIODevice::ReadOnly)){
                qDebug() << "Json file opened";
            }
    }
}

void json::jsonUserParser(QString username_p, QString password_p, QJsonObject object, bool& login){

    QJsonValue username = object.value(username_p);

    if(username == QJsonValue::Undefined){
        //Debug
        //qDebug() << "This user does not exist";
        login = false;

    }else{
        //Debug
        //qDebug() << "This user exist";

        QJsonObject identifiers = object.value(username_p).toObject();
        QJsonValue password = identifiers.value("password");

        if(password == password_p){
            login = true;
        }else{
            login = false;
            QMessageBox errorMsg;
            errorMsg.critical(0,"Error","Wrong password !");
        }
    }
}
