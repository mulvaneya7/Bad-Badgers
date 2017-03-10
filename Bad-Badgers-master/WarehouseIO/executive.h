#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <iostream>
#include <qstring>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include "member.h"
using namespace std;

class Executive:public Member
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

#endif // EXECUTIVE_H
