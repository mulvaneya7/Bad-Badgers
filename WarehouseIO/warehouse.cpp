#include "warehouse.h"

Warehouse::Warehouse()
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
               //|   -name-    ||-id-||
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
        if(tmpId/100000 !=0)
        {
            throw "Bad Date";
        }
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
        if (memberList[i]->getId() == inputID)
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

Member Warehouse::SearchName(QString inputName)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if (memberList[i]->getName() == inputName)
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
bool  Warehouse::isItem(QString searchItem)
{
    int i = 0;
    bool found = false;
    while (i < itemList.size() && found == false)
    {
        if (itemList[i].itemName == searchItem)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }
    return found;
}
int Warehouse::ItemIndex(QString searchItem)
{
    int i = 0;
    bool found = false;
    while (i < itemList.size() && found == false)
    {
        if (itemList[i].itemName == searchItem)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }
    if(!found)
    {
        i=-1;
    }
    return i;
}
void Warehouse::loadSalesReport(QString fileName)
{
    QFile infile(fileName);
    infile.open(QFile::ReadOnly|QFile::Text);
    QDataStream in(&infile);
    QString tempDate;
    int id;
    QString itemName;
    float cost;
    int amtSold;

    TransactionNode tempTransaction;
    itemStruct tempItemNode;
    //Get inputs now
    while(!in.atEnd())
    {
        //get the inputs
        in >> tempDate;
        in >> id;
        in >>itemName;
        in >>cost;
        in >>amtSold;


        //if we have time implement error checking if not code continues below;
        // Construct the transactionHistory node
        tempTransaction.date.Set(tempDate);
        tempTransaction.iD = id;
        tempTransaction.productName = itemName;
        tempTransaction.price = cost;
        tempTransaction.quantity = amtSold;
        TransactionList.push_back(tempTransaction);
        //Construct the itemlist node
        //if the item exists all file inputs set it to true
        //if the item exists the price and the name are already known
        //we only have to update the quantity sold
        if(this->isItem(itemName))
        {
            itemList[ItemIndex(itemName)].forSale=true;
            itemList[ItemIndex(itemName)].quanSold+= amtSold;
        }
        //if it doesnt exist we push a new tempTempNode to the vector
        else
        {
            tempItemNode.itemName=itemName;
            tempItemNode.quanSold=amtSold;
            tempItemNode.cost=cost;
            tempItemNode.forSale=true;
            itemList.push_back(tempItemNode);
        }
    }
}

//void Warehouse::SortQR()
//{
//    sort(itemList.begin(), itemList.end(), itemList.name);
//}
