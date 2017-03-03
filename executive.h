#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <qstring>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
using namespace std;

class Executive : Public Member
{
public:
//CONSTRUCTOR
Executive();
Executive(Member Instance);

//DESTRUCTOR
~Executive();

//ACCESSORS
	float GetRebate();
//MUTATORS

private:
const float rebate = .0325; // Rebate percent / 100 for easy multiplication


};

#endif /* EXECUTIVE_H_ */