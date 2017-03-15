#include "LoginScreen.h"
#include "ui_LoginScreen.h"


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
        ui->PasswordInput->setText("");
    }
}

void MainWindow::on_UsernameInput_returnPressed()
{
    on_LoginButton_clicked();
}

void MainWindow::on_CreateNewBadger_clicked()
{
   userCreation.show();
}

void MainWindow::on_Exit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_PasswordInput_returnPressed()
{
    on_LoginButton_clicked();
}
