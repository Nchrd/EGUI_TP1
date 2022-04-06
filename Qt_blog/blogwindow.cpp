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
    this->blogLoader(user);
}

BlogWindow::~BlogWindow()
{
    delete ui;
}

void BlogWindow::on_deletePostPushButton_clicked()
{
    if(itemSelected != -1){
        QListWidgetItem *it = ui->blogListWidget->takeItem(itemSelected);
        delete it;

        this->deletePost(this->actualUser, itemSelected);
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


void BlogWindow::blogLoader(QString user){
    QFile blogFile("blog.json");
    if(!blogFile.open(QIODevice::ReadOnly)) qDebug() << "Can't load blog data";

    QJsonDocument blogData = QJsonDocument::fromJson(blogFile.readAll());
    blogFile.close();

    QJsonObject blogObject = blogData.object();
    QJsonObject postData = blogObject[user].toObject();
    QJsonArray postArray = postData["posts"].toArray();

    for(int i = 0; i < postArray.size(); ++i){
        QJsonObject objContent = postArray[i].toObject();
        QStringList key = objContent.keys();
        QJsonObject dataContent = objContent[key[0]].toObject();
        QString title = dataContent["title"].toString();
        QString content = dataContent["post"].toString();
        QString date = dataContent["date"].toString();

        QString thePost = title;
        thePost.append("  - posted on ");
        thePost.append(date);
        thePost.append("\n");
        thePost.append(content);

        QListWidgetItem *item = new QListWidgetItem();
        item->setText(thePost);
        item->setSizeHint(QSize(200, 100));

        ui->blogListWidget->addItem(item);
    }
}

void BlogWindow::deletePost(QString user, int row){
    QFile blogFile("blog.json");
    if(!blogFile.open(QIODevice::ReadOnly)) qDebug() << "Can't load blog data";

    QJsonDocument blogData = QJsonDocument::fromJson(blogFile.readAll());
    blogFile.close();

    QJsonObject blogObject = blogData.object();
    QJsonObject postData = blogObject[user].toObject();
    QJsonArray postArray = postData["posts"].toArray();

    QJsonObject postContent = postArray[row-1].toObject();
    QStringList key = postContent.keys();
    QJsonObject id = postContent[key[0]].toObject();

    QString title = id["title"].toString().toLower();
    title.replace(" ", "");

    postContent.remove(title);
    postArray[row-1] = postContent;
    postData["posts"] = postArray;
    blogObject[user] = postData;

    QJsonDocument doc(blogObject);

    if(!blogFile.open(QIODevice::WriteOnly)) qDebug() << "Error";
    blogFile.write(doc.toJson());
    blogFile.close();

    if(blogFile.open(QIODevice::ReadOnly)) qDebug() << "Can adapt file read";
    QByteArray test = blogFile.readAll();
    QString text = test;
    blogFile.close();
    text.replace("{\n   },\n", "\n");
    qDebug() << text;
    if(blogFile.open(QIODevice::WriteOnly)) qDebug() << "Can adapt file write";
    blogFile.write(text.toUtf8());
    blogFile.close();
}

void BlogWindow::on_blogListWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QMessageBox *postMsg = new QMessageBox();
    postMsg->setText(item->text());
    postMsg->show();
}

