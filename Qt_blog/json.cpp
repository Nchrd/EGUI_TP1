#include "json.h"

json::json()
{

}

void json::jsonReader(QString username_p, QString password_p, bool& login){

    QJsonObject data_file;
    this->jsonOpener(false, data_file);

    jsonLoginUserParser(username_p, password_p, data_file, login);
}

void json::writeJson(QString username_m, QString password_p,QString confirmPassword_p, QString mail_p, bool& login){

    QJsonObject data_file;
    this->jsonOpener(false, data_file);

    jsonRegisterUserParser(username_m, password_p, confirmPassword_p, mail_p, data_file, login);


    if(login == true){
        QJsonObject data;

        QJsonObject mainObject;
        mainObject.insert("mail", mail_p);
        mainObject.insert("password", password_p);

        data.insert(username_m, mainObject);

        QByteArray byteArray;
        byteArray = QJsonDocument(data).toJson();

        //Open the Json file
        QString path = ":/rec/json/test.json";
        QFile user_file(path);

        qDebug() << user_file.permissions();
        user_file.setPermissions(QFile::WriteOwner);
        qDebug() << user_file.permissions();

        this->jsonModeOpener(true, user_file);

        //user_file.write(byteArray);
        user_file.close();
    }
}

void json::jsonModeOpener(bool mode, QFile& users){
    //True = write
    //False = read
    if(mode == true){
        if(!users.open(QFile::WriteOnly)){
                qDebug() << "Json file not opened";
                qCritical() << users.errorString();
            }
    } else if(mode == false) {
        if(users.open(QIODevice::ReadOnly)){
                qDebug() << "Json file opened";
            }
    }
}

void json::jsonOpener(bool mode, QJsonObject& data_file){

    //Open the Json file
    QString path = ":/rec/json/users.json";
    QFile user_file(path);
    this->jsonModeOpener(mode, user_file);

    data_file = this->jsonConverter(user_file);
    user_file.close();
}

void json::jsonLoginUserParser(QString username_p, QString password_p, QJsonObject object, bool& login){

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
            return;
        }
    }
}

void json::jsonRegisterUserParser(QString username_p, QString password_p, QString confirmPassword_p, QString mail_p, QJsonObject object, bool& login){

    QJsonValue username = object.value(username_p);

    if(username == QJsonValue::Undefined){
        //Username is free

        QJsonObject identifiers = object.value(username_p).toObject();
        QJsonValue mail = identifiers.value("mail");

        if(mail == QJsonValue::Undefined){
            //mail is free
            if(password_p == confirmPassword_p){
                login = true;
            }else{
                QMessageBox errorMsg;
                errorMsg.critical(0,"Error","The confirmation of your password is wrong !");
                login = false;
            }
        }else{
            QMessageBox errorMsg;
            errorMsg.critical(0,"Error","Mail already taken !");
            login = false;
        }

    }else{
        QMessageBox errorMsg;
        errorMsg.critical(0,"Error","Username already taken !");
        login = false;
    }
}

QJsonObject json::jsonConverter(QFile& user_file){

    //Convert the QString text to Bytearray first
    QByteArray jsonData ;
    jsonData = user_file.readAll();

    //Debug
    //if(jsonData.isEmpty() == false) qDebug() << "JSon file not empty";

    //Assign the json text to a JSON object
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);

    //Debug
    //if(jsonDocument.isObject() == true) qDebug() << "It a JSON object";

    //Then get the main JSON object and get the datas in it
    QJsonObject object = jsonDocument.object();

    return object;
}
