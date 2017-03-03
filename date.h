#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Date
{
public:
	//CONSTRUCTOR AND DESTRUCTOR
	Date(int aDay, int aMonth, int aYear);
	Date();
	~Date();

	//MUTATORS
	bool SetDate(int aDay, int aMonth, int aYear);
	//ACCESSORS
	int GetDay()   const;
	int GetMonth() const;
	int GetYear()  const;
	//friend that overloads insertion operator (ostream LHS, date RHS)
	friend ostream & operator<<(ostream & o, const Date & d);

private:
	bool IsValidDate(int aDay, int aMonth, int aYear);
	int month;
	int day;
	int year;
};
