#include "mainprogram.h"
#include "ui_mainprogram.h"
#include "warehouse.h"

MainProgram::MainProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainProgram)
{
    ui->setupUi(this);
    database.Autoload();
    OutputToItemsTable(database.GetItemList());
    OutputToMemberTable(database.GetMemberList());
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


    RefreshMemberTable(ui->DisplayOption->currentIndex());
}
//WIP - outputs to txt file
void MainProgram::on_GenerateReport_clicked()
{
    Date salesReportdate;
    salesReportdate.Set(ui->DateInput->text());
    QVector<TransactionNode> temp;
    QVector<Member*> expiringMembers;
    ui->TransactionTable->clearContents();
    ui->TransactionTable->setRowCount(0);
    ui->TransactionTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
    temp = database.getDailySalesReport(salesReportdate);
    //Outputs the Daily sales
    for(int row=0;row<temp.size();row++)
    {
        ui->TransactionTable->insertRow(row);
        for (int col = 0; col < MEMBER_TABLE_COL_SIZE; col++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Date of purchase
                case 0 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(temp[row].purchaseDate.DateSimple()));
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
            case 1 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(QString::number(temp[row].iD)));
                    break;
                         // Creates and outputs QTableWidgetItem Name of the item purchasedr
                case 2 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(temp[row].productName));
                    break;
                         // Creates and outputs QTableWidgetItem Quantity of product bought
            case 3 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem(QString::number(temp[row].quantity)));
                    break;
                         // Creates and outputs QTableWidgetItem Cost of the product
                case 4 : ui->TransactionTable->setItem(row,col,new QTableWidgetItem("$"+QString::number(temp[row].price,'f',2)));
                    break;
            }
        }
    }
    //Outputs Expiring members
    expiringMembers = database.CheckExpiration(salesReportdate);
    ui->Expirationoutput->clearContents();
    ui->Expirationoutput->setRowCount(0);
    ui->Expirationoutput->setColumnCount(4);
    for (int row = 0; row < expiringMembers.size(); row++)
    {
        ui->Expirationoutput->insertRow(row);
        for (int col = 0; col < 4; col++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Mamber Name
                case 0 : ui->Expirationoutput->setItem(row,col,new QTableWidgetItem(expiringMembers[row]->getName()));
                    break;
                         // Creates and outputs QTableWidgetItem ID of member
                case 1 : ui->Expirationoutput->setItem(row,col,new QTableWidgetItem(QString::number(expiringMembers[row]->getId())));
                    break;
                         // Creates and outputs QTableWidgetItem Name of the item purchasedr
                case 2 : ui->Expirationoutput->setItem(row,col,new QTableWidgetItem(expiringMembers[row]->getMembershipQString()));
                    break;
                         // Creates and outputs QTableWidgetItem Quantity of product bought
            case 3 : ui->Expirationoutput->setItem(row,col,new QTableWidgetItem(QString::number(
                                                              (expiringMembers[row]->getMembership()==MemType::REGULAR?85:95),'f',2)));
                    break;
            }
        }
    }

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
    database.sortTransactionList();
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
    ui->MemberTable->clearContents();
    ui->MemberTable->setRowCount(0);
    ui->MemberTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
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
                case 3 : if (memberList[row]->getMembershipQString() == "Executive")
                         {
                             ui->MemberTable->setItem(row,col,new QTableWidgetItem("$"+memberList[row]->getRebateQString()));
                         }
                         else if (memberList[row]->getMembershipQString() == "Regular")
                         {
                             ui->MemberTable->setItem(row,col,new QTableWidgetItem("$0.00"));
                         }
                    break;
                         // Creates and outputs QTableWidgetItem Expiration Date of member
                case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[row]->getExperation().DateSimple()));
                    break;
            }
        }
    }
}
void MainProgram::OutputExecutivesToMemberTable(QVector<Member*> memberList)
{
    ui->MemberTable->clearContents();
    ui->MemberTable->setRowCount(0);
    ui->MemberTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
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
                    case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getExperation().DateSimple()));
                        break;
                }
            }
            row++;
        }
    }
}
void MainProgram::OutputRegularsToMemberTable(QVector<Member*> memberList)
{
    ui->MemberTable->clearContents();
    ui->MemberTable->setRowCount(0);
    ui->MemberTable->setColumnCount(MEMBER_TABLE_COL_SIZE);
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
                    case 3 : ui->MemberTable->setItem(row,col,new QTableWidgetItem("$0.00"));
                        break;
                             // Creates and outputs QTableWidgetItem Expiration Date of member
                    case 4 : ui->MemberTable->setItem(row,col,new QTableWidgetItem(memberList[i]->getExperation().DateSimple()));
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
        if (database.isMember(tempString) == 1)
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
        }
        else
        {
            ui->MemberDataTable->setItem(0,0,new QTableWidgetItem("Not Found"));
        }
    }
    else if (valid == 1)
    {
        if (database.isMember(tempInt) == 1)
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

void MainProgram::on_ChangeMemberShip_clicked()
{
    if (ui->MemberDataTable->item(0,0) != 0)
    {
        int i;
        bool valid;
        QString tempString = ui->MemberSearchInput->text();
        int tempInt = tempString.toInt(&valid,10);
        Member tempMember;
        ui->ChangeMembershipLabel->setText("Test0");
        if (valid == 0)
        {
            tempMember = database.SearchName(tempString);
            ui->ChangeMembershipLabel->setText("Test1");
            i = database.SearchNameindex(tempString);
            if (tempMember.getMembershipQString() != "Regular")
            {
                database.ChangeMemberShip(i,"Regular");
                ui->ChangeMembershipLabel->setText("Changed "+tempString+" Membership to: Regular");
            }
            else
            {
                database.ChangeMemberShip(i,"Executive");
                ui->ChangeMembershipLabel->setText("Changed "+tempString+" Membership to: Executive");
            }
        }
        else if (valid == 0)
        {
            tempMember = database.SearchID(tempInt);
            ui->ChangeMembershipLabel->setText("Test2");
            i = database.SearchIDindex(tempInt);
            if (tempMember.getMembershipQString() == "Executive")
            {
                database.ChangeMemberShip(i,"Regular");
                ui->ChangeMembershipLabel->setText("Changed "+tempString+" Membership to: Regular");
            }
            else if (tempMember.getMembershipQString() == "Regular")
            {
                database.ChangeMemberShip(i,"Executive");
                ui->ChangeMembershipLabel->setText("Changed "+tempString+" Membership to: Executive");
            }
        }
        ui->MemberDataTable->clearContents();
        ui->MemberDataTable->setRowCount(MEMBER_SEARCH_TABLE_ROW_SIZE);
        ui->MemberDataTable->setColumnCount(MEMBER_SEARCH_TABLE_COL_SIZE);
        OutputSearchedMemberToTable();
        OutputToMemberTable(database.GetMemberList());
    }
}

void MainProgram::on_AddMember_clicked()
{
    Member tempMember;
    if(database.isMember(ui->addNameEdit->text()) == 1 ||
       database.isMember(ui->addIdEdit->text()) == 1)
    {
        ui->addMemberError->setText("Member name/ID already exists!");
        ui->addNameEdit->clear();
        ui->addIdEdit->clear();
        ui->addDateEdit->clear();
        ui->addMemberEdit->clear();
    }
    else if(database.isMember(ui->addNameEdit->text()) == 0 &&
            database.isMember(ui->addIdEdit->text()) == 0)
    {
        database.AddMember(ui->addNameEdit->text(),(ui->addIdEdit->text()).toInt(),
                           ui->addDateEdit->text(),ui->addMemberEdit->text());
//        // Set date QString to tempDate class
//        tempDate.Set(ui->addDateEdit->text());
//        // Set member info
//        tempMember.setName(ui->addNameEdit->text());
//        tempMember.setId((ui->addIdEdit->text()).toInt());
//        tempMember.setDate(tempDate);
//        tempMember.setMemberShip(ui->addMemberEdit->text());
//        // Pushback member to vector
//        database.AddMember(tempMember);
        // Refresh Table
        OutputToMemberTable(database.GetMemberList());
        // Label update
        ui->addMemberError->setText(ui->addNameEdit->text()+" has been added!");
    }
}

void MainProgram::on_SaveMasterFile_clicked()
{
    QString fileDirectory = QFileDialog::getSaveFileName(this,
                                                         tr("Open Master Sales Report"),
                                                         "C://",
                                                         "All files(*x*);;Text File(*.txt)");
    database.SaveMasterSalesReport(fileDirectory);
}

void MainProgram::on_LoadMasterFile_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                         tr("Open Master Sales Report"),
                                                         "C://",
                                                         "All files(*x*);;Text File(*.txt)");
    qDebug() << QDir::currentPath();
    database.LoadMasterSalesReport(fileDirectory);
    RefreshTransactionTable();
}
void MainProgram::on_deleteMember_clicked()
{
   bool valid;
        //takes the input from the input box and saves into string
        QString memberSearched = ui->deleteMemberInput->text();
        //checks to see if string is convertable to an int
        int convertInt = memberSearched.toInt(&valid);
        //if not we then search via the name that was inputted
        if (valid == 0)
        {
            if(database.isMember(memberSearched) == 1)
            {
              int index = database.SearchNameindex(memberSearched);
              database.ChangeMemberShip(index, "Inactive");
              ui->deletedMemberLabel->setText("Member deleted: " + memberSearched);
              RefreshMemberTable(ui->DisplayOption->currentIndex());
            }
            else
            {
              ui->deletedMemberLabel->setText("Member not found!");
            }
        }
        //if it was convertible then we search via the inputted ID
        else
        {
            if(database.isMember(convertInt) == 1)
            {
                int index = database.SearchIDindex(convertInt);
                database.ChangeMemberShip(index, "Inactive");
                ui->deletedMemberLabel->setText("ID deleted: " + memberSearched);
                RefreshMemberTable(ui->DisplayOption->currentIndex());
            }
            else
            {
              ui->deletedMemberLabel->setText("Member not found!");
            }
        }
}
void MainProgram::on_ToggleAvailability_clicked()
{
    bool forSale;
    QString tempString = ui->ItemSearchinput->text();
    int index = database.ItemIndex(tempString);
    if (index == -1)
    {
        ui->itemAvailabilitLabel->setText("Error, "+tempString+" does not exist.");
    }
    else
    {
        database.ChangeItemAvailability(index);
        forSale = database.getItemForSale(index);
        if (forSale == 1)
        {
            ui->itemAvailabilitLabel->setText(tempString+" is now for sale.");
        }
        else if (forSale == 0)
        {
            ui->itemAvailabilitLabel->setText(tempString+" is now not for sale.");
        }
        ui->ItemStatstable->clearContents();
        ui->ItemStatstable->setRowCount(0);
        ui->ItemStatstable->setColumnCount(ITEM_TABLE_COL_SIZE);
        OutputToItemsTable(database.GetItemList());
    }
}

void MainProgram::on_SubmitNewItem_clicked()
{
    QString tempName = ui->newItemNameInput->text();
    bool exists = database.isItem(tempName);
    if (exists == 0)
    {
        float tempFloat = (ui->newItemPriceInput->text()).toFloat();
        itemStruct tempItem;
        tempItem.itemName = tempName;
        tempItem.cost = tempFloat;
        tempItem.quanSold = 0;
        tempItem.forSale = 1;
        database.AddItem(tempItem);
        ui->addItemCheckLabel->setText(tempName+" has been added.");
        ui->ItemStatstable->clearContents();
        ui->ItemStatstable->setRowCount(0);
        ui->ItemStatstable->setColumnCount(ITEM_TABLE_COL_SIZE);
        OutputToItemsTable(database.GetItemList());
    }
    else if (exists == 1)
    {
        ui->addItemCheckLabel->setText("Error, "+tempName+" already exists.");
    }
}
void MainProgram::on_manualReportButton_clicked()
{
    bool valid;
    QString tempName = ui->manualProductName->text();
    int index = database.ItemIndex(tempName);
    if (index != -1)
    {
        int tempQuantity = ui->manualReportQuantity->text().toInt();
        int tempID = ui->manualReportID->text().toInt();
        valid = database.isMember(tempID);
        if (valid == 1)
        {
            Date tempDate;
            valid = tempDate.Set(ui->manualReportDate->text());
            if (valid == 1)
            {
                float tempPrice = database.getItemPrice(index);
                float tempSpent = tempPrice*tempQuantity;
                TransactionNode tempNode;
                tempNode.productName = tempName;
                tempNode.purchaseDate = tempDate;
                tempNode.iD = tempID;
                tempNode.price = tempPrice;
                tempNode.quantity = tempQuantity;
                database.AddTransactionNode(tempNode);
                database.ChangeMemberTotalSpent(tempID,tempSpent);
                database.ChangeItemQuantity(index,tempQuantity);
                RefreshTransactionTable();
                OutputToItemsTable(database.GetItemList());
                OutputToMemberTable(database.GetMemberList());
                ui->manualReportError->setText("Report has been added.");
            }
            else if (valid == 0)
            {
                ui->manualReportError->setText("Error, invalid date.");
            }
        }
        else if (valid == 0)
        {
            ui->manualReportError->setText("Error, invalid quantity.");
        }
    }
    else if (index == -1)
    {
        ui->manualReportError->setText("Error, the item "+tempName+" does not exist.");
    }
}

void MainProgram::on_SaveInventory_clicked()
{
    QString fileDirectory = QFileDialog::getSaveFileName(this,
                                                         tr("Open Inventory Save File"),
                                                         "C://",
                                                         "Text File(*.txt)");
    database.SaveMasterInventory(fileDirectory);
}

void MainProgram::on_LoadInventory_clicked()
{
    QString fileDirectory = QFileDialog::getOpenFileName(this,
                                                         tr("Open Inventory Save File"),
                                                         "C://",
                                                         "Text File(*.txt)");
    database.LoadMasterInventory(fileDirectory);
    OutputToItemsTable(database.GetItemList());
}

void MainProgram::on_SaveButton_clicked()
{
    QString fileDirectory = QFileDialog::getSaveFileName(this,
                                                         tr("Open Member Save File"),
                                                         "C://",
                                                         "Text File(*.txt)");
    database.SaveMembers(fileDirectory);
}

void MainProgram::on_ClearData_clicked()
{
    QObject::connect(&ClearWindow, SIGNAL(ReturnText(QString)),
                     this, SLOT(ValidateClear(QString)));
    ClearWindow.show();
}

void MainProgram::ValidateClear(QString input)
{
    if (input != "Cancel")
    {
        if (input == "Save")
        {
            QString fileDirectory = QFileDialog::getExistingDirectory(this,
                                                                      tr("Open Save Folder"),
                                                                      "C://", QFileDialog::ShowDirsOnly);
            database.SaveMasterInventory(fileDirectory + "/Inventory.txt");
            database.SaveMasterSalesReport(fileDirectory + "/Sales.txt");
            database.SaveMembers(fileDirectory + "/Members.txt");
        }
        database.clear();
        on_RefreshItemSales_clicked();
        OutputToMemberTable(database.GetMemberList());
    }
    QObject::disconnect(&ClearWindow, SIGNAL(ReturnText(QString)),
                     this, SLOT(ValidateClear(QString)));
}

void MainProgram::on_RefreshTransTable_clicked()
{
    RefreshTransactionTable();
    ui->Expirationoutput->clearContents();
    ui->Expirationoutput->setRowCount(0);
    ui->Expirationoutput->setColumnCount(4);

}
