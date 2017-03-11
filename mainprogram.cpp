#include "mainprogram.h"
#include "ui_mainprogram.h"
#include "warehouse.h"

MainProgram::MainProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainProgram)
{
    ui->setupUi(this);
}

MainProgram::~MainProgram()
{
    delete ui;
}
void MainProgram::on_pushButton_3_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                        tr("Open Member Info File"),
                                                        "C://",
                                                        "All files(*x*);;Text File(*.txt)");
    try{
        database.LoadMember(fileDirectory);
    }
    catch(string& e)
    {
        QString error = error.fromStdString(e);
        ui->MemberListError->setText(error);
    }

}
//void MainProgram::LoadMemberTable()
//{
//    QLabel* temp = new QLabel();

//    ui->MemberDataTable;
//}

void MainProgram::on_GenerateReport_clicked()
{
    Date salesReportdate;
    salesReportdate.Set(ui->DateInput->text());
}
// Returns member from memberList vector at given index
const Member Mainprogram::GetMember(QVector memberList, int index)
{
    return *memberList[index];
}
// Returns itemStruct from itemList vector at given index
const itemStruct GetItem(QVector itemList, int index)
{
    return itemList[index];
}
// Returns TransactionNode from transactionList vector at given index
const TransactionNode GetTransaction(QVector transactionList, int index)
{
    return transactionList[index];
}
