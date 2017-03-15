#include "warehouse.h"

QString TransactionNode::Print()
{
    QString output;

    output  = purchaseDate.DateSimple() + '\n';
    output += QString::number(iD) + '\n';
    output += productName + '\n';
    output += QString::number(price) + ' ' + QString::number(quantity);

    return output;
}

Warehouse::Warehouse()
{

}
Warehouse::~Warehouse()
{

}
void Warehouse::LoadMember(QString fileName)
{
    QFile inFile(fileName);
    inFile.open(QIODevice::ReadOnly);
    QTextStream in(&inFile);
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
    while(!(in.atEnd()))
    {
        tmpName = in.readLine();
       
        in >> tmpId;
        
        in >>tmpType;
        
        in >>tmpDate;
        
        in.readLine();
        memberList.push_back(NULL);
        memberList.back() = new Member(tmpName, tmpId, tmpDate, tmpType);
    }
    sortMembers();
}
void Warehouse::ChangeMemberShip(int index, QString newMembership)
{
    memberList[index]->setMemberShip(newMembership);
}
void Warehouse::SaveMembers(QString fileName)
{
    QFile outFile(fileName);
    outFile.remove();
    outFile.open(QFile::WriteOnly);

    QTextStream out(&outFile);

    for (int i = 0; i < memberList.size(); i++)
    {
        out << memberList[i]->printMember();
        if (i != memberList.size() -1)
        {
            out << endl;
        }
    }
}
void Warehouse::AddMember(QString tmpName, int tmpId, QString tmpDate,QString tmpMembership)
{
    memberList.push_back(NULL);
    memberList.back() = new Member(tmpName, tmpId, tmpDate, tmpMembership);
}

int Warehouse::memberListSize()
{
    return memberList.size();
}
void Warehouse::sortMembers()
{
    for(int x=0; x<memberList.size(); x++)
    {
        for(int y=0; y<memberList.size()-1; y++)
        {
            if(memberList[y]->getId() > memberList[y+1]->getId())
            {
                Member* temp = memberList[y+1];
                memberList[y+1] = memberList[y];
                memberList[y] = temp;
            }
        }
    }
}
void Warehouse::sortItems()
{
    for(int x=0; x<itemList.size(); x++)
    {
        for(int y=0; y<itemList.size()-1; y++)
        {
            if(itemList[y].itemName > itemList[y+1].itemName)
            {
                itemStruct temp = itemList[y+1];
                itemList[y+1] = itemList[y];
                itemList[y] = temp;
            }
        }
    }
}
Member Warehouse::SearchID(int id)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if (memberList[i]->getId() == id)
        {
            found = true;
        }
        else if(i < memberList.size())
        {
            i++;
        }
    }
        return *memberList[i]; // Returns a member at the iterator of the found name member or returns the last iterator if not found. Must be error checked in main.
}
Member Warehouse::SearchName(QString name)
{
    int i = 0;
    bool found = false;
    while (i < memberList.size() && found == false)
    {
        if (memberList[i]->getName() == name)
        {
            found = true;
        }
        else if(i < memberList.size())
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
    QTextStream in(&infile);
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
        tempDate = in.readLine();
        in >> id;
        in.readLine();
        itemName = in.readLine();
        in >>cost;
        in >>amtSold;
        in.readLine();

        //if we have time implement error checking if not code continues below;
        // Construct the transactionHistory node
        tempTransaction.purchaseDate.Set(tempDate);
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
            qDebug()<< itemName;
            qDebug()<< "Already Exists in the list Appending\n";
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
    sortItems();
}

void Warehouse::SaveMasterSalesReport(QString fileName)
{
    QFile outFile(fileName);
    outFile.remove();
    outFile.open(QFile::WriteOnly);
    QTextStream out(&outFile);

    for (int i = 0; i < TransactionList.size(); i++)
    {
        out << TransactionList[i].Print();
        if ( i != TransactionList.size() - 1)
        {
            out << endl;
        }
    }
}

void Warehouse::LoadMasterSalesReport(QString fileName)
{
    QFile inFile(fileName);
    inFile.open(QFile::ReadOnly|QFile::Text);
    QTextStream in(&inFile);
    TransactionNode tempNode;

    TransactionList.clear();

    while (!in.atEnd())
    {
        tempNode.purchaseDate.Set(in.readLine());
        in >> tempNode.iD;
        in.readLine();
        tempNode.productName = in.readLine();
        in >> tempNode.price;
        in >> tempNode.quantity;
        in.readLine();

        TransactionList.push_back(tempNode);
    }
}

//void Warehouse::SortQR()
//{
//    sort(itemList.begin(), itemList.end(), itemList.name);
//}
QVector<Member*> Warehouse::GetMemberList()
{
    return memberList;
}
QVector<itemStruct> Warehouse::GetItemList()
{
    return itemList;
}
QVector<TransactionNode> Warehouse::GetTransactionList()
{
    return TransactionList;
}
//Void Delete member will switch their
//membership to inactive
void Warehouse::DeleteMember(int id)
{
    if(isMember(id))
    {
     int index = SearchIDindex(id);
     memberList[index]->setMemberShip("Inactive");
    }
}
void Warehouse::DeleteMember(QString name)
{
    if(isMember(name))
    {
     int index = SearchNameindex(name);
     memberList[index]->setMemberShip("Inactive");
    }
}
//ADDING ITEM TO ITEM STRUCT VECTOR
void Warehouse::AddItem(itemStruct input)
{
    itemList.push_back(input);
    sortItems();
}
