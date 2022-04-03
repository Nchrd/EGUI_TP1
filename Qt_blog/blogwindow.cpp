#include "blogwindow.h"
#include "ui_blogwindow.h"

BlogWindow::BlogWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::BlogWindow)
{
    ui->setupUi(this);
}

BlogWindow::~BlogWindow()
{
    delete ui;
}

void BlogWindow::on_deletePostPushButton_clicked()
{
    if(itemSelected != 1){
        QListWidgetItem *it = ui->blogListWidget->takeItem(itemSelected);
        delete it;

        ui->blogListWidget->setCurrentRow(-1);
    }
}


void BlogWindow::on_postPushButton_clicked()
{
    QString str = ui->postLineEdit->text();
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");

    if(str == "") return;

    str.append("\n");
    str.append("  - posted ");
    str.append(formattedTime);

    ui->blogListWidget->addItem(str);
}


void BlogWindow::on_disconnectPushButton_clicked()
{
    qApp->exit();
}


void BlogWindow::on_blogListWidget_currentRowChanged(int currentRow)
{
    itemSelected = currentRow;
}

