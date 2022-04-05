#include "json.h"

json::json()
{

}

void json::jsonUserReader(QString username_p, QString password_p, bool& login){

    QJsonObject data_file;
    this->jsonUserOpener(false, data_file, username_p);

    jsonLoginUserParser(username_p, password_p, data_file, login);
}

void json::writeJson(QString username_m, QString password_p,QString confirmPassword_p, QString mail_p, bool& login){

    QJsonObject data_file;
    this->jsonUserOpener(false, data_file, username_m);

    jsonRegisterUserParser(username_m, password_p, confirmPassword_p, mail_p, data_file, login);


    if(login == true){
        QFile users("users.json");
        if(!users.open(QIODevice::ReadOnly)) qDebug() << "Error";

        QJsonDocument jsonOrg = QJsonDocument::fromJson(users.readAll());
        users.close();

        QJsonObject userDetails = { {"mail", mail_p},
                                    {"password", password_p}};
        QJsonObject user = {{username_m, userDetails}};

        QJsonArray arrLog = jsonOrg.array();
        arrLog.push_back(user);
        QJsonDocument doc(arrLog);

        if(!users.open(QIODevice::ReadWrite)) qDebug() << "Error";
        qDebug() << users.readAll();
        users.write(doc.toJson());
        qDebug() << users.readAll();
        users.close();
        this->jsonAdapter(users);

    }
}

void json::jsonModeOpener(bool mode, QFile& file){
    if(file.exists() == false){
        file.open(QIODevice::WriteOnly);
        return;
    }

    //True = write
    //False = read
    if(mode == true){
        if(file.open(QFile::WriteOnly)){
                qDebug() << "Json file opened";
            }
    } else if(mode == false) {
        if(file.open(QIODevice::ReadOnly)){
                qDebug() << "Json file opened";
            }
    }
}

void json::jsonUserOpener(bool mode, QJsonObject& data_file, QString username_p){

    //Open the Json file
    QString path = "users.json";
    QFile user_file(path);
    this->jsonModeOpener(mode, user_file);

    data_file = this->jsonConverter(user_file, username_p);
    user_file.close();
}

void json::jsonLoginUserParser(QString username_p, QString password_p, QJsonObject object, bool& login){

    QJsonValue username = object.value(username_p);

    if(username == QJsonValue::Undefined){
        //Debug
        //qDebug() << "This user does not exist";
        QMessageBox errorMsg;
        errorMsg.critical(0,"Error","This user does not exist !");
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

void json::jsonAdapter(QFile& file){
    if(file.open(QIODevice::ReadOnly)) qDebug() << "Can adapt file read";
    QByteArray test = file.readAll();
    QString text = test;
    file.close();
    text.replace("[", "");
    text.replace("]", "");
    text.replace("}\n\n\n    {", ",\n");
    qDebug() << text;
    if(file.open(QIODevice::WriteOnly)) qDebug() << "Can adapt file write";
    file.write(text.toUtf8());
    file.close();

}

QJsonObject json::jsonConverter(QFile& user_file, QString username_p){

    //Convert the QString text to Bytearray first
    QByteArray jsonData ;
    jsonData = user_file.readAll();

    //Debug
    if(jsonData.isEmpty() == false) qDebug() << "JSon file not empty";

    //Assign the json text to a JSON object
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);

    //Debug
    if(jsonDocument.isObject() == true) qDebug() << "It a JSON object";

    //Then get the main JSON object and get the datas in it
    QJsonObject object = jsonDocument.object();

    return object;
}

void json::jsonBlogLoader(QString User){

}

void json::jsonBlogWriter(QString title, QString post, QString user, QDateTime date){
    QFile users("blog.json");
    if(!users.open(QIODevice::ReadOnly)) qDebug() << "Error";

    QJsonDocument jsonOrg = QJsonDocument::fromJson(users.readAll());
    users.close();

    QString postId = title.toLower();
    postId.replace(" ", "");

    QJsonObject postDetails = { {"title", title},
                                {"post", post},
                                {"date", date.toString()}};
    QJsonObject postData = {{postId, postDetails}};

    QJsonObject jsonOrgContent = jsonOrg.object();
    QJsonObject userData = jsonOrgContent[user].toObject();
    QJsonArray arrLog = userData["posts"].toArray();
    arrLog.push_back(postData);

    userData["posts"] = arrLog;
    jsonOrgContent[user] = userData;
    QJsonDocument doc(jsonOrgContent);
    qDebug() << doc;


    if(!users.open(QIODevice::WriteOnly)) qDebug() << "Error";
    qDebug() << users.readAll();
    users.write(doc.toJson());
    qDebug() << users.readAll();
    users.close();

}

void json::createBlog(QString username, QString blogTitle){
    //Open the Json file
    QString file_path = "blog.json";
    QFile user_file_create(file_path);
    if(user_file_create.exists() == false) user_file_create.open(QIODevice::WriteOnly);
    user_file_create.close();

    QString blogId = blogTitle.toLower();
    blogId.replace(" ", "");
    QJsonObject posts;

    QJsonObject blogDetails = { {"title", blogTitle},
                                {"id", blogId},
                                {"posts", posts}};
    QJsonObject newBlog = {{username, blogDetails}};

    //Open the Json file
    QString path = "blog.json";
    QFile user_file(path);

    if(!user_file.open(QIODevice::ReadOnly)) qDebug() << "Can't open file";

    QJsonDocument jsonOrg =     QJsonDocument::fromJson(user_file.readAll());
    user_file.close();

    QJsonArray arrLog = jsonOrg.array();
    arrLog.push_back(newBlog);
    QJsonDocument doc(arrLog);

    if(!user_file.open(QIODevice::ReadWrite)) qDebug() << "Error";
    qDebug() << user_file.readAll();
    user_file.write(doc.toJson());
    //qDebug() << user_file.readAll();
    user_file.close();
    this->jsonAdapter(user_file);

}

void json::jsonBlogOpener(bool mode, QJsonObject& data_file, QString username_p){
    //Open the Json file
    QString path = "blog.json";
    QFile user_file(path);
    this->jsonModeOpener(mode, user_file);

    data_file = this->jsonConverter(user_file, username_p);
    user_file.close();
}
