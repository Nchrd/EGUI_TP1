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
    json myJson;
    bool canLogin = false;
    QString password = ui->passwordLineEdit->text();
    QString username = ui->usernameLineEdit->text();

    myJson.jsonReader(username, password, canLogin);

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

