#ifndef WAREHOUSE_H
#define WAREHOUSE_H


#include "date.h"
#include "executive.h"
#include <QString>
#include <QVector>
#include <QDataStream>
#include <QFile>
#include <string>
struct TransactionNode
{
    string productName;
    Date purchaseDate;
    int iD;
    int quantity;
    float price;

};
struct itemStruct
{

};

class Warehouse
{
public:
    Warehouse();
    //Member initialization "literally"
    Warehouse(ifstream& input);
    ~Warehouse();

    void LoadMember(QString fileName);
    //Automatic Appending Memberlist
    void AddMember(Member newMember);
    //Front end Appending to Memberlist
    void AddMember();
    //Adds an itemStruct node to the itemList vector
    void AddItem(itemStruct input);
    //Front end item addition to the itemList vector
    void AddItem();
    //Deleting the member from the memberList
    void DeleteMember(int id);
    void DeleteMember(QString name);
    //Turns off the sold bool in the item list when an item is no longer needing to be sold
    //Front end Appending to TransactionList
    void ReportSales();
    //Automatic Appending to TransactionList
    void ReportSales(ifstream& input);
    //This method will report all of the purchases sorted by member ID
    QString ReportPurchases();
    //Reports all of the members that will expire within the month of the date Class
    QString CheckExpiration(Date dateClass);
    //Reports the Sales Report for any givin day.
    QString getSalesReport(Date dateClass);
    //Reports the Quantity and total revanue of the items sold. Sorted by item name.(alphabetical)
    QString reportItemSales();
    //Reports the Member's total spending at the warehouse by Id number
    QString reportMemberPurchases(QString name);
    QString reportMemberPurchases(int iD);
    //Reports the Executive member's rebates and sorts the list by Id Number
    QString reportExecutiveRebate();
    //Checks if member should convert to Executive or an Executive member should convert to regular member
    bool CheckForConvert(Member member);

private:
    // Helper Functions
    // Sorts TransactionList by date via DateClass
    void sortTransactionList();
    // Sorts Quantity and Revanue by item name
    void sortQR();
    //
    void sortRebate(int id);
    //Searchs the memberList for an instance of member
    Member SearchID(int id);
    Member SearchName(QString name);

    //Pointers to members
    QVector<Member*> memberList;

    //For total reference of item history
    QVector<itemStruct> itemList;

    //For daily sales report.
    QVector<TransactionNode> TransactionList;
};
#endif // WAREHOUSE_H
