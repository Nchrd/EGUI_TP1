#include "blogwindow.h"
#include "ui_blogwindow.h"

BlogWindow::BlogWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlogWindow)
{
    ui->setupUi(this);
}

BlogWindow::~BlogWindow()
{
    delete ui;
}
