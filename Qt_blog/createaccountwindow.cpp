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
