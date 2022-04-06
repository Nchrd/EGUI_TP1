#ifndef BLOGWINDOW_H
#define BLOGWINDOW_H

#include <QMainWindow>
#include <QTextOption>
#include <QListWidget>
#include <QListWidgetItem>

#include "json.h"

namespace Ui {
class BlogWindow;
}

class BlogWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlogWindow(QWidget *parent = nullptr);
    BlogWindow(QWidget *parent, QString& user);
    ~BlogWindow();

    void blogLoader(QString user);
    void deletePost(QString user, int row);

private slots:
    void on_deletePostPushButton_clicked();

    void on_postPushButton_clicked();

    void on_disconnectPushButton_clicked();

    void on_blogListWidget_currentRowChanged(int currentRow);

    void on_blogListWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::BlogWindow *ui;
    QString actualUser;
    int itemSelected = -1;
};

#endif // BLOGWINDOW_H
