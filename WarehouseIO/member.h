#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <QString>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include "date.h"
#include "person.h"
using namespace std;

//enum to define what the current member is
enum class MemType {
    INACTIVE,
    REGULAR,
    EXECUTIVE
};

const QString MemNames[] = {"Inactive",
                            "Regular",
                            "Executive"};

class Member:public Person
{
public:

//CONSTRUCTOR
Member();
Member(QString mName, int mID, QString date, QString mMembership);
Member(QString mName, int mID, QString date, QString mMembership, float spent);
Member(Member & Instance);

//DESTRUCTOR
~Member();

//ACCESSORS
QString printMember();
void printPurchaseHistory();
void printOutstandingCharges();
void printTotalPurchases();
void gettotalSpent();
QString getName();
int getId();
float getTotalSpent();
// Returns enum type(membership)
MemType getMembership();
// Returns QString of enum type
QString getMembershipQString();
float getRebate();
QString getDate();
Date getDateClass();
QString getRebateQString();
Date getExperation();

//MUTATORS
void setName(QString newName);
void setId(int newId);
void setDate(Date tempDate);
void setMemberShip(QString newMembership);
void setExpiration(QString newExp);
void addTotalSpend(float addSpend);

//OPERATION OVERLOADS
void operator=(const Member& member);

private:

QString name;		//name of said regularMember
int id;				//id to identify member
float totalSpent;	//total amount spent by member
Date exDate;		//Expiration date of the member
MemType membership;	//enum declaring what type of member this member is
const float rebate = .0325; // Rebate percent / 100 for easy multiplication
};



#endif // MEMBER_H
