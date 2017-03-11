#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "createuser.h"
#include "mainprogram.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_UsernameInput_returnPressed();
    void on_LoginButton_clicked();
    void on_CreateNewBadger_clicked();


    void on_Exit_clicked();

private:
    Ui::MainWindow *ui;
    MainProgram mainUI;
    CreateUser userCreation;
};

#endif // MAINWINDOW_H
