#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QVector>
#include "RegularandDate.h"


struct TransactionNode
{
	//name of product
	//dateClass
	//Id
	//quantity
	//price
	
};
class Warehouse
{
Public:
	Warehouse();
	//Member initialization "literally"
	Warehouse(ifstream& input);
	~Warehouse();
	
    	void LoadMember(Qstring fileName);
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
	void DeleteMember(string inputName);
	//Turns off the sold bool in the item list when an item is no longer needing to be sold
	void DeleteMember(string inputName);
	//Front end Appending to TransactionList
	void ReportSales();
	//Automatic Appending to TransactionList
	void ReportSales(ifstream& input);
	//This method will report all of the purchases sorted by member ID
	Qstring ReportPurchases();
	//Reports all of the members that will expire within the month of the date Class
	Qstring CheckExpiration(Date dateClass);
	//Reports the Sales Report for any givin day.
	Qstring getSalesReport(Date dateClass);
	//Reports the Quantity and total revanue of the items sold. Sorted by item name.(alphabetical)
	Qstring reportItemSales();
	//Reports the Member's total spending at the warehouse by Id number
	Qstring reportMemberPurchases(string inputName);
	Qstring reportMemberPurchases(int inputID);
	//Reports the Executive member's rebates and sorts the list by Id Number
	Qstring reportExecutiveRebate();
	//Checks if member should convert to Executive or an Executive member should convert to regular member
	bool CheckForConvert(Member member);
	
Private:
	// Helper Functions
	// Sorts TransactionList by date via DateClass
	void sortTransactionList();
	// Sorts Quantity and Revenue by item name
	void sortQ&R(string inputName);
	// 
	void sortRebate(int inputID);
	//Searchs the memberList for an instance of member
	Member SearchID(int inputID);
	Member SearchName(string inputName);


	//Pointers to members
	Qvector<*Member> memberList;
	
	//For total reference of item history
	Qvector<ItemStruct> itemList;
	
	//For daily sales report.
	Qvector<TransactionNode> TransactionList;
};


#endif // WAREHOUSE_H
