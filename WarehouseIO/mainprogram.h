#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H

#include <QDialog>
#include "warehouse.h"
#include <QFileDialog>
#include <QLabel>
namespace Ui {
class MainProgram;
}

class MainProgram : public QDialog
{
    Q_OBJECT

public:
    explicit MainProgram(QWidget *parent = 0);
    ~MainProgram();
    void LoadMemberTable();
private slots:
    void on_DateInput_userDateChanged(const QDate &date);

    void on_pushButton_3_clicked();

private:
    Ui::MainProgram *ui;
    Warehouse database;
};

#endif // MAINPROGRAM_H
