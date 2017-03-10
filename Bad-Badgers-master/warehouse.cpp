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
    QFile inFile(fileName);//Direct the filestream to the correct file.
    inFile.open(QFile::ReadOnly|QFile::Text);//Tell the filestream that the file is READ ONLY and read as ASCII text
    QDataStream in(&inFile); //Set the QdataStream to the Filestream
    //temporary dataholders
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
        //As we can see no need to .ignore due to the fact that reading from QDatastream text leaves no
        //Null terminating characters in the inputbufer.
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







