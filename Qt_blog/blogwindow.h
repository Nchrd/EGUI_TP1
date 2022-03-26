#ifndef BLOGWINDOW_H
#define BLOGWINDOW_H

#include <QMainWindow>

namespace Ui {
class BlogWindow;
}

class BlogWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlogWindow(QWidget *parent = nullptr);
    ~BlogWindow();

private:
    Ui::BlogWindow *ui;
};

#endif // BLOGWINDOW_H
