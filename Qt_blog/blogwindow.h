#ifndef BLOGWINDOW_H
#define BLOGWINDOW_H

#include <QMainWindow>
#include <QTextOption>

#include "json.h"

namespace Ui {
class BlogWindow;
}

class BlogWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlogWindow(QWidget *parent = nullptr);
    ~BlogWindow();

private slots:
    void on_deletePostPushButton_clicked();

    void on_postPushButton_clicked();

    void on_disconnectPushButton_clicked();

    void on_blogListWidget_currentRowChanged(int currentRow);

private:
    Ui::BlogWindow *ui;

    int itemSelected = -1;
};

#endif // BLOGWINDOW_H
