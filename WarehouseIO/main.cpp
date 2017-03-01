#include "mainwindow.h"
#include <QApplication>
//Main.cpp for front end development
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
