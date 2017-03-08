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

void Warehouse::LoadMember(QString fileName)
{
    QFile inFile(fileName);
    inFile.open(QFile::ReadOnly|QFile::Text);
    QDataStream in(&inFile);
    QString tmpName;
    int tmpId;
    QString tmpType;
    QString tmpDate;

    //Deletes the list before we reinitialize it
    while(!memberList.empty())
    {
        delete memberList.back();
        memberList.pop_back();
    }

    //reads from the stream
    while(!in.atEnd())
    {
        in >> tmpName;
        in >> tmpId;
        in >>tmpType;
        in >>tmpDate;
        memberList.back() = new Member(tmpName, tmpId, tmpDate, tmpType);
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

void Warehouse::SortQR()
{
    sort(itemList.begin(), itemList.end(), itemList.name);
}







