#include "blogwindow.h"
#include "ui_blogwindow.h"

BlogWindow::BlogWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::BlogWindow)
{
    ui->setupUi(this);
}

BlogWindow::BlogWindow(QWidget *parent, QString& user) : QMainWindow(parent), ui(new Ui::BlogWindow){
    ui->setupUi(this);
    actualUser = user;
    ui->usernameLabel->setText(user);
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
    QString title = ui->titleLineEdit->text();
    ui->postTextEdit->setAcceptRichText(true);
    QString post = ui->postTextEdit->toPlainText();
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");

    if(title == "") return;
    if(post == "") return;

    json myJson;
    myJson.jsonBlogWriter(title, post, actualUser, date);

    title.append("  - posted on ");
    title.append(formattedTime);
    title.append("\n");
    title.append(post);

    QListWidgetItem *item = new QListWidgetItem();
    item->setText(title);
    item->setSizeHint(QSize(200, 100));

    ui->blogListWidget->addItem(item);
    ui->titleLineEdit->clear();
    ui->postTextEdit->clear();
}


void BlogWindow::on_disconnectPushButton_clicked()
{
    qApp->exit();
}


void BlogWindow::on_blogListWidget_currentRowChanged(int currentRow)
{
    itemSelected = currentRow;
}
