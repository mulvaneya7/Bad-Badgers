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

    while(!memberList.empty())
    {
        delete memberList.back();
        memberList.pop_back();
    }

    while(inFile)
    {

    }
}
