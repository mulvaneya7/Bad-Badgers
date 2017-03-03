#include "member.h"
//Alex Mulvaney
//CONSTRUCTOR (defualt)

Member::Member()
      :Date()
{
  name.clear();
  id = 0;
  totalSpent = 0.0;
  MemType::membership = INACTIVE;
}

//CONSTRUCTOR (alternate)
Member::Member(QString mName, int mID, QString mDate, QString mMembership)
        :name(mName), id(mID), Date(mDate)
{
  //in the case of unconformed input, will handle
  //uppercasing the first letter of the inputted string
  //ie. "executive" to "Executive"
  mMembership[0] = toupper(mMembership[0];

  if(mMembership == "Inactive")
  {
    MemType::membership = INACTIVE;
  }
  else if(mMembership == "Regular")
  {
    Memtype::membership = REGULAR;
  }
  else if(mMembership == "Executive")
  {
    Memtype::membership = EXECUTIVE;
  }
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
Member::~Member() {};

//MUTATORS
void Member::setName(QString newName)
{
  name = newName;
}

void Member::setId(int newId)
{
  id = newId;
}
