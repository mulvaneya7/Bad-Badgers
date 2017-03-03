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
