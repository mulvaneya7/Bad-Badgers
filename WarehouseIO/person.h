#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <QString>
#include <qvector>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
using namespace std;

class Person
{
public:
    //CONSTRUCTOR
    Person();

    //DESTRUCTOR
    virtual ~Person();

    //ACCESSORS
    virtual QString getName() = 0;
    virtual int getId() = 0;

private:
    QString name;   //name of person
    int id;         //id of person
};

#endif // PERSON_H
