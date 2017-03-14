#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H

#include <QDialog>
#include "warehouse.h"
#include <QFileDialog>
#include <QLabel>
#include "date.h"
#include "member.h"
namespace Ui {
class MainProgram;
}

class MainProgram : public QDialog
{
    Q_OBJECT

public:
    explicit MainProgram(QWidget *parent = 0);
    ~MainProgram();

private slots:

    void on_pushButton_3_clicked();

    void on_GenerateReport_clicked();

    void on_DisplayOption_activated(int index);

    void on_ReportFileContents_clicked();

    void on_Filebrowser_clicked();

    void on_RefreshItemSales_clicked();

    void on_Exit_clicked();

    void on_MemberSearchInput_returnPressed();

    void on_ChangeMemberShip_clicked();

    void on_AddMember_clicked();

private:
    //Private datamembers
    Ui::MainProgram *ui;
    Warehouse database;
    // Constant used for outputing to the member table
    const int MEMBER_TABLE_COL_SIZE = 5;
    // Constants used for outputing to the member specific search table
    const int MEMBER_SEARCH_TABLE_ROW_SIZE = 6;
    const int MEMBER_SEARCH_TABLE_COL_SIZE = 1;
    // Constant used for outputing to the item table
    const int ITEM_TABLE_COL_SIZE = 5;



    /*
     * HELPER FUNCTIONS
     */
    // Returns member from memberList vector at given index
    const Member GetMember(QVector<Member*> memberList, int index);
    // Returns itemStruct from itemList vector at given index
    const itemStruct GetItem(QVector<itemStruct> itemList, int index);
    // Returns TransactionNode from transactionList vector at given index
    const TransactionNode GetTransaction(QVector<TransactionNode> TransactionList, int index);
    //Refreshes the lists usually called based when you input from file or
    //append to the lists
    void RefreshMemberTable(int index);
    void RefreshTransactionTable();
    // Prints the entire memberList vector into the QTableWidget
    void OutputToMemberTable(QVector<Member*> memberList);
    // Prints the executives of the memberList vector into the QTableWidget
    void OutputExecutivesToMemberTable(QVector<Member*> memberList);
    // Prints the regulars of the memberList vector into the QTableWidget
    void OutputRegularsToMemberTable(QVector<Member*> memberList);
    // Prints the items of the itemList vector into the QTableWidget
    void OutputToItemsTable(QVector<itemStruct> itemList);
    // Prints the member of the memberList vector into the QTableWidget
    void OutputSearchedMemberToTable();

};

#endif // MAINPROGRAM_H
