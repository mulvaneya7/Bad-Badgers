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
const Member MainProgram::GetMember(QVector memberList, int index)
{
    return *memberList[index];
}
// Returns itemStruct from itemList vector at given index
const itemStruct MainProgram::GetItem(QVector itemList, int index)
{
    return itemList[index];
}
// Returns TransactionNode from transactionList vector at given index
const TransactionNode MainProgram::GetTransaction(QVector transactionList, int index)
{
    return transactionList[index];
}
void MainProgram::OutputToMemberTableName(QVector memberList)
{
    for (unsigned col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
    {
        for (unsigned row = 0; row < memberList.size(); row++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Name of member
                case 0 : QTableWidgetItem *item = new QTableWidgetItem(*memberList[row].getName());
                         Ui::MemberTable->setItem(row, col, item);
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
                case 1 : QTableWidgetItem *item = new QTableWidgetItem(*memberList[row].getID());
                         Ui::MemberTable->setItem(row, col, item);
                    break;
                         // Creates and outputs QTableWidgetItem Membership Type of member
                case 2 : QTableWidgetItem *item = new QTableWidgetItem(*memberList[row].getMembershipQString());
                         Ui::MemberTable->setItem(row, col, item);
                    break;
                         // Creates and outputs QTableWidgetItem Rebate of member
                case 3 : QTableWidgetItem *item = new QTableWidgetItem(*memberList[row].getRebate());
                         Ui::MemberTable->setItem(row, col, item);
                    break;
                         // Creates and outputs QTableWidgetItem Expiration Date of member
                case 4 : QTableWidgetItem *item = new QTableWidgetItem(*memberList[row].DateSimple());
                         Ui::MemberTable->setItem(row, col, item);
                    break;
            }
        }
    }
}
