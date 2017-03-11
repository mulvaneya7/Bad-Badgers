#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H

#include <QDialog>
#include "warehouse.h"
#include <QFileDialog>
#include <QLabel>
#include "date.h"
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
    // Returns member from memberList vector at given index
    const Member GetMember(QVector memberList, int index);
    // Returns itemStruct from itemList vector at given index
    const itemStruct GetItem(QVector itemList, int index);
    // Returns TransactionNode from transactionList vector at given index
    const TransactionNode GetTransaction(QVector transactionList, int index);

private slots:

    void on_pushButton_3_clicked();

    void on_GenerateReport_clicked();

private:
    Ui::MainProgram *ui;
    Warehouse database;
};

#endif // MAINPROGRAM_H
