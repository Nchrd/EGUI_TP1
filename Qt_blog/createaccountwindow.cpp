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
    QString test, test2, test3;
    myJson.writeJson(test, test2, test3);
}

