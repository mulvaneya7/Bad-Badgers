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
//Cannot refactor causes errors this is the loading members input file.
//Does NOT append to the list.
void MainProgram::on_pushButton_3_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                        tr("Open Member Info File"),
                                                        "C://",
                                                        "All files(*x*);;Text File(*.txt)");
    database.LoadMember(fileDirectory);

    ui->MemberListError->setText(QString::number(database.memberListSize()));
    RefreshMemberTable(ui->DisplayOption->currentIndex());
}
//WIP - outputs to txt file
void MainProgram::on_GenerateReport_clicked()
{
    Date salesReportdate;
    salesReportdate.Set(ui->DateInput->text());
}
void MainProgram::on_DisplayOption_activated(int index)
{
    RefreshMemberTable(index);
}
void MainProgram::RefreshMemberTable(int index)
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

void MainProgram::RefreshTransactionTable()
{
    ui->TransactionTable->clearContents();
    ui->TransactionTable->setRowCount(0);
    ui->TransactionTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
    for (int row = 0; row < database.GetTransactionList().size(); row++)
    {
        ui->TransactionTable->insertRow(row);
        for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Date of purchase
                case 0 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(
                                                            database.GetTransactionList()[row].purchaseDate.DateSimple()));
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
                case 1 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(QString::number(database.GetTransactionList()[row].iD)));
                    break;
                         // Creates and outputs QTableWidgetItem Name of the item purchasedr
                case 2 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(database.GetTransactionList()[row].productName));
                    break;
                         // Creates and outputs QTableWidgetItem Quantity of product bought
                case 3 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(QString::number(database.GetTransactionList()[row].quantity)));
                    break;
                         // Creates and outputs QTableWidgetItem Cost of the product
                case 4 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem("$"+QString::number(database.GetTransactionList()[row].price,'f',2)));
                    break;
            }
        }
    }

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
                case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem("$"+memberList[row]->getRebateQString()));
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
                    case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem("$"+memberList[i]->getRebateQString()));
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
                    case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem("$"+memberList[i]->getRebateQString()));
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
void MainProgram::OutputToItemsTable(QVector<itemStruct> itemList)
{
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
                case 1 : ui->ItemStatstable->setItem(row,col,new QTableWidgetItem("$"+QString::number(itemList[row].cost,'f',2)));
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
void MainProgram::OutputSearchedMemberToTable()
{
    bool valid;
    Member tempMember;
    QString tempString = ui->MemberSearchInput->text();
    int tempInt = tempString.toInt(&valid,10);
    if (valid == 0)
    {
        tempMember = database.SearchName(tempString);
        if (tempMember.getName() == tempString)
        {
            for (int row = 0; row < MEMBER_SEARCH_TABLE_ROW_SIZE; row++)
            {
                switch(row)
                {
                             // Creates and outputs QTableWidgetItem Name of member
                    case 0 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(tempMember.getName()));
                        break;
                             // Creates and outputs QTableWidgetItem ID of member
                    case 1 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(QString::number(tempMember.getId())));
                        break;
                             // Creates and outputs QTableWidgetItem Total Spent of member
                    case 2 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("$"+QString::number(tempMember.getTotalSpent())));
                        break;
                             // Creates and outputs QTableWidgetItem Membership Type of member
                    case 3 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(tempMember.getMembershipQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Rebate of member
                    case 4 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("$"+tempMember.getRebateQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Whether or not the member should convert to regular or executive
                    case 5 : if (tempMember.getRebate() > 10)
                             {
                                 ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("Executive"));
                             }
                             else
                             {
                                 ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("Regular"));
                             }
                        break;
                }
            }
        }
        else
        {
            ui->MemberDataTable->setItem(0,0,new QTableWidgetItem("Not Found"));
        }
    }
    else if (valid == 1)
    {
        tempMember = database.SearchID(tempInt);
        if (tempMember.getId() == tempInt)
        {
            for (int row = 0; row < MEMBER_SEARCH_TABLE_ROW_SIZE; row++)
            {
                switch(row)
                {
                             // Creates and outputs QTableWidgetItem Name of member
                    case 0 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(tempMember.getName()));
                        break;
                             // Creates and outputs QTableWidgetItem ID of member
                    case 1 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(QString::number(tempMember.getId())));
                        break;
                             // Creates and outputs QTableWidgetItem Total Spent of member
                    case 2 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("$"+QString::number(tempMember.getTotalSpent())));
                        break;
                             // Creates and outputs QTableWidgetItem Membership Type of member
                    case 3 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem(tempMember.getMembershipQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Rebate of member
                    case 4 : ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("$"+tempMember.getRebateQString()));
                        break;
                             // Creates and outputs QTableWidgetItem Whether or not the member should convert to regular or executive
                    case 5 : if (tempMember.getRebate() > 10)
                             {
                                 ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("Executive"));
                             }
                             else
                             {
                                 ui->MemberDataTable->setItem(row,0,new QTableWidgetItem("Regular"));
                             }
                        break;
                }
            }
        }
        else
        {
            ui->MemberDataTable->setItem(0,0,new QTableWidgetItem("Not Found"));
        }
    }
}
void MainProgram::on_ReportFileContents_clicked()
{
    QString fileDirectory = ui->FileDiectoryReportSales->text();
    database.loadSalesReport(fileDirectory);
    ui->FileDiectoryReportSales->clear();
    ui->ItemStatstable->clearContents();
    ui->ItemStatstable->setRowCount(0);
    ui->ItemStatstable->setColumnCount(ITEM_TABLE_COL_SIZE);
    OutputToItemsTable(database.GetItemList());
    RefreshMemberTable(ui->DisplayOption->currentIndex());
    RefreshTransactionTable();
}
void MainProgram::on_Filebrowser_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                         tr("Open Member Info File"),
                                                         "C://",
                                                         "All files(*x*);;Text File(*.txt)");
    ui->FileDiectoryReportSales->setText(fileDirectory);
}
void MainProgram::on_RefreshItemSales_clicked()
{
    ui->ItemStatstable->clearContents();
    ui->ItemStatstable->setRowCount(0);
    ui->ItemStatstable->setColumnCount(ITEM_TABLE_COL_SIZE);
    OutputToItemsTable(database.GetItemList());
}
void MainProgram::on_SearchOption_activated(int index)
{
    searchOption = index;
}
void MainProgram::on_MemberSearchInput_returnPressed()
{
    ui->MemberDataTable->clearContents();
    ui->MemberDataTable->setRowCount(MEMBER_SEARCH_TABLE_ROW_SIZE);
    ui->MemberDataTable->setColumnCount(MEMBER_SEARCH_TABLE_COL_SIZE);
    OutputSearchedMemberToTable();
}
void MainProgram::on_Exit_clicked()
{
    QApplication::quit();
}
