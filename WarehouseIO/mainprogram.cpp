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
void MainProgram::on_DisplayOption_activated(int index)
{
    ui->MemberTable->clearContents();
    ui->MemberTable->setRowCount(0);
    ui->MemberTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
    switch(index)
    {
        case 0 : OutputToMemberTable(database.GetMemberList());
            break;
        case 1 : OutputExecutivesToMemberTable(database.GetMemberList());
            break;
        case 2 : OutputRegularsToMemberTable(database.GetMemberList());
            break;
    }
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
    for (int row = 0; row < memberList.size(); row++)
    {
        ui->MemberTable->insertRow(row);
        for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Name of member
                case 0 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[row]->getName()));
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
                case 1 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(QString::number(memberList[row]->getId())));
                    break;
                         // Creates and outputs QTableWidgetItem Membership Type of member
                case 2 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[row]->getMembershipQString()));
                    break;
                         // Creates and outputs QTableWidgetItem Rebate of member
                case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[row]->getRebateQString()));
                    break;
                         // Creates and outputs QTableWidgetItem Expiration Date of member
                case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[row]->getDate()));
                    break;
            }
        }
    }
}
void MainProgram::OutputExecutivesToMemberTable(QVector<Member*> memberList)
{
    int row = 0;
    for (int i = 0; i < memberList.size(); i++)
    {
        if (memberList[i]->getMembershipQString() == "Executive")
        {
            ui->MemberTable->insertRow(row);
            for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
            {
                switch(col)
                {
                             // Creates and outputs QTableWidgetItem Name of member
                    case 0 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getName()));
                        break;
                             // Creates and outputs QTableWidgetItem ID of member
                    case 1 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(QString::number(memberList[i]->getId())));
                        break;
                             // Creates and outputs QTableWidgetItem Membership Type of member
                    case 2 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getMembershipQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Rebate of member
                    case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getRebateQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Expiration Date of member
                    case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getDate()));
                        break;
                }
            }
            row++;
        }
    }
}
void MainProgram::OutputRegularsToMemberTable(QVector<Member*> memberList)
{
    int row = 0;
    for (int i = 0; i < memberList.size(); i++)
    {
        if (memberList[i]->getMembershipQString() == "Regular")
        {
            ui->MemberTable->insertRow(row);
            for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
            {
                switch(col)
                {
                             // Creates and outputs QTableWidgetItem Name of member
                    case 0 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getName()));
                        break;
                             // Creates and outputs QTableWidgetItem ID of member
                    case 1 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(QString::number(memberList[i]->getId())));
                        break;
                             // Creates and outputs QTableWidgetItem Membership Type of member
                    case 2 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getMembershipQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Rebate of member
                    case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getRebateQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Expiration Date of member
                    case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getDate()));
                        break;
                }
            }
            row++;
        }
    }
}
void MainProgram::on_ReportFileContents_clicked()
{
    QString fileDirectory = ui->FileDiectoryReportSales->text();
    database.loadSalesReport(fileDirectory);
    ui->FileDiectoryReportSales->clear();
}
void MainProgram::on_Filebrowser_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                         tr("Open Member Info File"),
                                                         "C://",
                                                         "All files(*x*);;Text File(*.txt)");
    ui->FileDiectoryReportSales->setText(fileDirectory);
}
/*void MainProgram::on_TabMenu_currentChanged(int index, QVector<itemStruct> itemList)
{
    if (index == 2)
    {
        ui->ItemStatstable->clearContents();
        ui->ItemStatstable->setRowCount(0);
        ui->ItemStatstable->setColumnCount(ITEM_TABLE_COL_SIZE);
        for (int row = 0; row < itemList.size(); row++)
        {
            ui->ItemStatstable->insertRow(row);
            for (int col = 0; col < ITEM_TABLE_COL_SIZE; col++)
            {
                switch(col)
                {
                             // Creates and outputs QTableWidgetItem Name of item
                    case 0 : ui->ItemStatstable->setItem(row,col,new QTableWidgetItem(itemList[row].itemName));
                        break;
                             // Creates and outputs QTableWidgetItem Price of item
                    case 1 : ui->ItemStatstable->setItem(row,col,new QTableWidgetItem("$"+QString::number(itemList[row].cost)));
                        break;
                             // Creates and outputs QTableWidgetItem Quantity of item sold
                    case 2 : ui->ItemStatstable->setItem(row,col,new QTableWidgetItem(QString::number(itemList[row].quanSold)));
                        break;
                             // Creates and outputs QTableWidgetItem Total Revenue of item
                    case 3 : ui->ItemStatstable->setItem(row,col,new QTableWidgetItem("$"+QString::number(float(itemList[row].quanSold)*(itemList[row].cost))));
                        break;
                             // Creates and outputs QTableWidgetItem Availability of sale of item
                    case 4 : if (itemList[row].forSale == 0)
                             {
                                 ui->ItemStatstable->setItem(row,col,new QTableWidgetItem("No"));
                             }
                             else if (itemList[row].forSale == 1)
                             {
                                 ui->ItemStatstable->setItem(row,col,new QTableWidgetItem("Yes"));
                             }
                        break;
                }
            }
        }
    }
}*/
