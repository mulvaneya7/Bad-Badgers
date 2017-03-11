#include "member.h"
//Alex Mulvaney
//CONSTRUCTOR (defualt)
Person::~Person(){}

Member::Member()
{
  name.clear();
  id = 0;
  totalSpent = 0.0;
  membership = MemType::INACTIVE;

}

//CONSTRUCTOR (alternate)
Member::Member(QString mName, int mID, QString mDate, QString mMembership)
        :name(mName), id(mID), exDate(mDate)
{
  //in the case of unconformed input, will handle
  //uppercasing the first letter of the inputted string
  //ie. "executive" to "Executive"

  mMembership[0] = mMembership[0].toUpper();
  if(mMembership == "Inactive")
  {
    membership =MemType::INACTIVE;
  }
  else if(mMembership == "Regular")
  {
    membership = MemType::REGULAR;
  }
  else if(mMembership == "Executive")
  {
    membership = MemType::EXECUTIVE;
  }
  totalSpent = 0.0;
}

//COPY CONSTRUCTOR
Member::Member(Member & Instance)
{
  name = Instance.name;
  id = Instance.id;
  totalSpent = Instance.totalSpent;
  exDate = Instance.exDate;
  membership = Instance.membership;

}

//DESTRUCTOR
Member::~Member()
{
    name.clear();
    id = 0;
    totalSpent = 0;
};

//MUTATORS
void Member::setName(QString newName)
{
  name = newName;
}

void Member::setId(int newId)
{
  id = newId;
}
void Member::setMemberShip(QString mMembership)
{
    if(mMembership == "Inactive")
    {
      membership =MemType::INACTIVE;
    }
    else if(mMembership == "Regular")
    {
      membership = MemType::REGULAR;
    }
    else if(mMembership == "Executive")
    {
      membership = MemType::EXECUTIVE;
    }
}

void Member::setExpiration(QString newExp)
{
    Date *newD = new Date(newExp);
    exDate = *newD;
}
void Member::addTotalSpend(float addSpend)
{
    totalSpent+=addSpend;
}

//ACCESSORS
QString Member::printMember()
{
    QString output;
    output.clear();

    output = name + '\n';
    output += id + '\n';
    output += MemNames[int(membership)] + '\n';
    output += exDate.DateSimple();
    return output;
}

int Member::getId()
{
    return (id);
}

QString Member::getName()
{
    return name;
}

float Member::getTotalSpent()
{
    return totalSpent;
}
MemType Member::getMembership()
{
    return membership;
}
QString Member::getMembershipQString() // Returns QString of enum type
{
    return MemNames[int(membership)];
}
float Member::getRebate()
{
    return totalSpent*rebate;
}
QString Member::getDate()
{
    return exDate.DateSimple();
}
