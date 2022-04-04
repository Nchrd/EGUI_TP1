#include "createaccountwindow.h"
#include "ui_createaccountwindow.h"

CreateAccountWindow::CreateAccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAccountWindow)
{
    ui->setupUi(this);
}

CreateAccountWindow::~CreateAccountWindow()
{
    delete ui;
}

void CreateAccountWindow::on_createAccountPushButton_clicked()
{
    json myJson;
    bool canLogin = false;
    QString username = ui->usernameLineEdit->text();
    QString mail = ui->mailLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString confirmPassword = ui->confirmPasswordLineEdit->text();
    QString blogTitle = ui->blogTitleLineEdit->text();

    myJson.writeJson(username, password, confirmPassword, mail, canLogin);
    myJson.createBlog(username, blogTitle);

    if(canLogin == true){
        this->close();
        BlogWindow *blogWindow = new BlogWindow;
        blogWindow->show();
    }
}

