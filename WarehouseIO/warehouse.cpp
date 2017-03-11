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
    QTextStream in(&inFile);
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
        tmpName = in.readLine();
        in >> tmpId;
        in >>tmpType;
        in >>tmpDate;
        memberList.push_back(new Member(tmpName, tmpId, tmpDate, tmpType));
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
int Warehouse::SearchIDindex(int inputID)
{
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
            return i; // Returns a member at the iterator of the found name member or returns the last iterator if not found. Must be error checked in main.
    }
}
int Warehouse::SearchNameindex(QString inputName)
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
    return i; // Returns a member at the iterator of the found name member or returns the last iterator if not found. Must be error checked in main.
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
bool Warehouse::isMember(int id)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if ((memberList.at(i))->getId()==id)
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
bool Warehouse::isMember(QString name)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if ((memberList.at(i))->getName()==name)
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
        //updates members running totals
        if(this->isMember(id))
        {
            memberList.at(this->SearchIDindex(id))->addTotalSpend(cost*amtSold);
        }

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
