#include "loginwindow.h"
#include "./ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->swap = 1;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_loginPushButton_clicked()
{
    bool canLogin = false;
    QString password = ui->passwordLineEdit->text();
    QString username = ui->usernameLineEdit->text();

    jsonReader(username, password, canLogin);
}


void LoginWindow::on_createPushButton_clicked()
{

}

void LoginWindow::jsonReader(QString username_p, QString password_p, bool& login){

        //Open the Json file
        QString path = QCoreApplication::applicationDirPath() + "/json/users.json";
        qDebug() << path;
        QFile user_file(path);
        if(user_file.open(QIODevice::ReadOnly)){
                qDebug() << "Json file opened";
            }

        //Convert the QString text to Bytearray first
        QByteArray jsonData ;
        jsonData = user_file.readAll();
        user_file.close();
        if(jsonData.isEmpty() == false) qDebug() << "JSon file not empty";

        //Assign the json text to a JSON object
        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
        if(jsonDocument.isObject() == true) qDebug() << "It a JSON object";

        //Then get the main JSON object and get the datas in it
        QJsonObject object = jsonDocument.object();

        QJsonValue username = object.value(username_p);
        qDebug() << username;

        if(username == QJsonValue::Undefined){
            qDebug() << "Cet utilisateur n'existe pas";
            login = false;

        }else{
            qDebug() << "Cet utilisateur existe";

            QJsonObject identifiers = object.value(username_p).toObject();
            QJsonValue password = identifiers.value("password");
            qDebug() << password;

            if(password == password_p){
                login = true;
            }else{
                login = false;
                qDebug() << "Wrong password";

                QLabel *child = new QLabel(this);
                child->setText("Wrong password !");
                child->show();
            }
        }

}

void LoginWindow::jsonWriter(QString username_p, QString password_p){

}




void LoginWindow::on_passwordPushButton_clicked()
{
    if(this->swap == 1){
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);
        this->swap = -this->swap;
    }
    else{
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
        this->swap = -this->swap;
    }
}

