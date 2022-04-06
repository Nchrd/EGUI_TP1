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

    /**
     * @brief blogLoader Loads the blog data of a selected user
     * @param user User that log in his blog
     */
    void blogLoader(QString user);

    /**
     * @brief deletePost Delete an entry from view and in JSON file (bugged for json side)
     * @param user user to delete an entry from
     * @param row entry number in the entry array
     */
    void deletePost(QString user, int row);

private slots:
    /**
     * @brief on_deletePostPushButton_clicked calls the deletePost function
     */
    void on_deletePostPushButton_clicked();

    /**
     * @brief on_postPushButton_clicked calls functions used to display and save in JSON files the new entry
     */
    void on_postPushButton_clicked();

    /**
     * @brief on_disconnectPushButton_clicked leave the application
     */
    void on_disconnectPushButton_clicked();

    /**
     * @brief on_blogListWidget_currentRowChanged allows the user to select an entry (to tell the program which entry delete)
     * @param currentRow
     */
    void on_blogListWidget_currentRowChanged(int currentRow);

    /**
     * @brief on_blogListWidget_itemDoubleClicked allows the user to see a full post in a Message Box if it is too long for the Widget List
     * @param item
     */
    void on_blogListWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::BlogWindow *ui;
    QString actualUser;
    int itemSelected = -1;
};

#endif // BLOGWINDOW_H
