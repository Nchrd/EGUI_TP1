#include "loginwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);

    QFile styleSheetFile(":/rec/styleSheets/SyNet.qss");
    if(!styleSheetFile.exists()) qDebug() << "File does not exist";
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    LoginWindow w;
    w.show();
    return a.exec();
}
