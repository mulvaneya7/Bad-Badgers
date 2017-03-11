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
    database.LoadMember(fileDirectory);

    ui->MemberListError->setText(QString::number(database.memberListSize()));
}
void MainProgram::on_GenerateReport_clicked()
{
    Date salesReportdate;
    salesReportdate.Set(ui->DateInput->text());
}
// Returns member from memberList vector at given index
const Member MainProgram::GetMember(QVector<Member*> memberList, int index)
{
    return *memberList[index];
}
// Returns itemStruct from itemList vector at given index
const itemStruct MainProgram::GetItem(QVector<itemStruct> itemList, int index)
{
    return itemList[index];
}
// Returns TransactionNode from transactionList vector at given index
const TransactionNode MainProgram::GetTransaction(QVector<TransactionNode> TransactionList, int index)
{
    return TransactionList[index];
}
void MainProgram::OutputToMemberTable(QVector<Member*> memberList)
{
    QTableWidgetItem* item;
    for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
    {
        for (int row = 0; row < memberList.size(); row++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Name of member
                case 0 : item = new QTableWidgetItem();
                         item->setText(memberList[row]->getName());
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
                case 1 : item = new QTableWidgetItem();
                         item->setText(QString::number(memberList[row]->getId()));
                    break;
                         // Creates and outputs QTableWidgetItem Membership Type of member
                case 2 : item = new QTableWidgetItem();
                         item->setText(memberList[row]->getMembershipQString());
                    break;
                         // Creates and outputs QTableWidgetItem Rebate of member
                case 3 : item = new QTableWidgetItem();
                         item->setText(memberList[row]->getRebateQString());
                    break;
                         // Creates and outputs QTableWidgetItem Expiration Date of member
                case 4 : item = new QTableWidgetItem();
                         item->setText(memberList[row]->getDate());
                    break;
            }
            ui->MemberTable->setItem(row, col, item);
        }
    }
}
