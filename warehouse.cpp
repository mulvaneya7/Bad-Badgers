#include "warehouse.h"

Warehouse::Warehouse()
{

}

Warehouse::Warehouse(ifstream& input)
{

}

Warehouse::~Warehouse()
{

}

Warehouse::LoadMember(Qstring fileName)
{
    QFile inFile(fileName.c_str());
    inFile.open();
    Qstring tmpName;
    int tmpId;
    Qstring tmpType;
    Qstring tmpDate;

    while(!memberList.empty())
    {
        delete memberList.back();
        memberList.pop_back();
    }

    while(inFile)
    {
        memberList.push_back();
        inFile.getline(tmpName);
        inFile >> tmpId;
        inFile.ignore('\n');
        inFile.getline(tmpType);
        inFile.getline(tmpDate);
        memberList.back() = new Member(tmpName, tmpID, tmpDate, tmpType);
    }
}
Member Warehouse::SearchID(int inputID)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if (memberList[i]->GetId() == inputID)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }
    return *memberList[i]; // Returns a member at the iterator of the found name member or returns the last iterator if not found. Must be error checked in main.
}
Member Warehouse::SearchName(string inputName)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if (memberList[i]->GetName() == inputName)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }
    return *memberList[i]; // Returns a member at the iterator of the found name member or returns the last iterator if not found. Must be error checked in main.
}
