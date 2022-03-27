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

    if(canLogin == true){
        this->close();
        BlogWindow *blogWindow = new BlogWindow;
        blogWindow->show();
    }
}


void LoginWindow::on_createPushButton_clicked()
{
    this->setDisabled(true);
    CreateAccountWindow *createAccount = new CreateAccountWindow;
    createAccount->show();
}

void LoginWindow::jsonReader(QString username_p, QString password_p, bool& login){

        //Open the Json file
        QString path = QCoreApplication::applicationDirPath() + "/json/users.json";
        QFile user_file(path);

        //Debug
        /*if(user_file.open(QIODevice::ReadOnly)){
                qDebug() << "Json file opened";
            }*/

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

        QJsonValue username = object.value(username_p);

        //Debug
        //qDebug() << username;

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

