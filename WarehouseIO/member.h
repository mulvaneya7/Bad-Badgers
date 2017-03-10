#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <QString>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include "date.h"
using namespace std;

//enum to define what the current member is
enum class MemType {
    INACTIVE,
    REGULAR,
    EXECUTIVE
};

class Member:public Person
{
public:
//CONSTRUCTOR
Member();
Member(QString mName, int mID, QString date, QString mMembership);
Member(Member & Instance);

//DESTRUCTOR
~Member();

//ACCESSORS
void printMember();
void printPurchaseHistory();
void printOutstandingCharges();
void printTotalPurchases();
void gettotalSpent();
QString getName();
QString getId();
QString getTotalSpent();
MemType getMembership();    //returns enum type(membership)
const float getRebate();

//MUTATORS
void setName(QString newName);
void setId(int newId);

private:
QString name;		//name of said regularMember
int id;				//id to identify member
float totalSpent;	//total amount spent by member
Date exDate;		//Expiration date of the member
MemType membership;	//enum declaring what type of member this member is
const float rebate = .0325; // Rebate percent / 100 for easy multiplication
};



#endif // MEMBER_H
