#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <qstring>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
using namespacestd;

//enum to define what the current member is
enum class MemType {
	INACTIVE,
	REGULAR,
	EXECUTIVE
};

class Member
{
public:
//CONSTRUCTOR
Member();
Member(QString mName, int mID, qstring date, qstring mMembership);
Member(Member & Instance);

//DESTRUCTOR
~Member();

//ACCESSORS
void printMember();
void printPurchaseHistory();
void printOutstandingCharges();
void printTotalPurchases();
void totalSpent();
//MUTATORS
void setName(QString newName);
void setId(int newId);

private:
QString name;		//name of said regularMember
int id;				//id to identify member
float totalSpent;	//total amount spent by member 
Date exDate;		//Expiration date of the member
MemType membership;	//enum declaring what type of member this member is

};
