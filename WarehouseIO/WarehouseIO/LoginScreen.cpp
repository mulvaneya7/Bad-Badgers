#include "LoginScreen.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{
    if(ui->UsernameInput->text()=="Dave"
       && ui->PasswordInput->text()=="Done")
    {
        this->close();
        mainUI.show();

    }
    else
    {
        ui->ErrorLabel->setText("Username: Dave \t Passwork: Done");
    }


}

void MainWindow::on_UsernameInput_returnPressed()
{
    if(ui->UsernameInput->text()=="Dave"
       && ui->PasswordInput->text()== "Done")
    {
        this->close();
        mainUI.show();
    }
    else
    {
        ui->ErrorLabel->setText("Username: Dave \t Passwork: Done");
    }
}

void MainWindow::on_CreateNewBadger_clicked()
{
   userCreation.show();
}
