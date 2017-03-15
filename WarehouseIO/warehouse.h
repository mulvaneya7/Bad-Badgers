#ifndef WAREHOUSE_H
#define WAREHOUSE_H


#include "date.h"
#include <QString>
#include <QVector>
#include <QDataStream>
#include <QFile>
#include <QDebug>
#include <string>
#include <QRegExp>
#include "member.h"
#include <iostream>
#include<QTextStream>
struct TransactionNode
{
    QString productName;
    Date purchaseDate;
    int iD;
    int quantity;
    float price;
    QString Print();
};
struct itemStruct
{
    QString itemName;
    float cost;
    int quanSold;
    bool forSale;
    QString Print();
    QString forSaleString();
    void StrToforSale(QString saleString);
};

class Warehouse
{
public:
    Warehouse();
    // Member initialization "literally"
    ~Warehouse();
    // Vector Creation through external file
    void LoadMember(QString fileName);
    void SaveMembers(QString fileName);
    void LoadMasterSalesReport(QString fileName);
    void SaveMasterSalesReport(QString fileName);
    void LoadMasterInventory(QString fileName);
    void SaveMasterInventory(QString fileName);
    void loadSalesReport(QString fileName);
    void Autosave();
    void AutosaveMembers();
    void AutosaveSales();
    void AutosaveInventory();
    void Autoload();
    // Automatic Appending Memberlist
    void AddMember(QString tmpName, int tmpId, QString tmpDate,QString tmpMembership);
    // Adds an itemStruct node to the itemList vector
    void AddItem(itemStruct input);
    // Changes the member's membership at index passed
    void ChangeMemberShip(int index, QString newMembership);
    // Changes the items's availability
    void ChangeItemAvailability(int index);
    // Deleting the member from the memberList
    void DeleteMember(int id);
    void DeleteMember(QString name);
    // Turns off the sold bool in the item list when an item is no longer needing to be sold
    // Front end Appending to TransactionList
    void ReportSales();
    // Automatic Appending to TransactionList
    void ReportSales(ifstream& input);
    // This method will report all of the purchases sorted by member ID
    QString ReportPurchases();
    // Reports all of the members that will expire within the month of the date Class
    QString CheckExpiration(Date dateClass);
    // Reports the Sales Report for any givin day.
    QString getSalesReport(Date dateClass);
    // Returns the forsale boolean at a given index of the itemList
    bool getItemForSale(int index);
    // Reports the Quantity and total revanue of the items sold. Sorted by item name.(alphabetical)
    QString reportItemSales();
    // Reports the Member's total spending at the warehouse by Id number
    QString reportMemberPurchases(QString name);
    QString reportMemberPurchases(int iD);
    // Reports the Executive member's rebates and sorts the list by Id Number
    QString reportExecutiveRebate();
    int SearchIDindex(int id);
    int SearchNameindex(QString name);

    // Checks if the item exists on the itemList variable if so it returns by reference
    bool isItem(QString searchItem);
    bool isMember(int id);
    bool isMember(QString name);
    int ItemIndex(QString searchItem);
    // Checks if member should convert to Executive or an Executive member should convert to regular member
    bool CheckForConvert(Member member);
    int memberListSize();
    
    QVector<Member*> GetMemberList();
    QVector<itemStruct> GetItemList();
    QVector<TransactionNode> GetTransactionList();

    // Searchs the memberList for an instance of member
    Member SearchID(int id);
    Member SearchName(QString name);
    // Sorts the memberList by membership number;
    void sortMembers();
    // Sorts the itemList by item name;
    void sortItems();

private:
    // Helper Functions
    // Sorts TransactionList by date via DateClass
    void sortTransactionList();
    // Sorts Quantity and Revenue by item name
    void sortQR();
    void sortRebate(int id);
    void upDateMemberlist();
    // Pointers to members
    QVector<Member*> memberList;

    // For total reference of item history
    QVector<itemStruct> itemList;

    // For daily sales report.
    QVector<TransactionNode> TransactionList;
};
#endif // WAREHOUSE_H
