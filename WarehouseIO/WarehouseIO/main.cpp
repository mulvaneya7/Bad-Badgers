#include "LoginScreen.h"
#include "mainprogram.h"
#include "createuser.h"
#include <QApplication>
#include <QString>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow LoginWindow;
    LoginWindow.show();

    return a.exec();
}
