#ifndef WAREHOUSE_H
#define WAREHOUSE_H

struct Transaction
{
    int date;
    int id;
    Qstring name;
    float price;
    int quantity;
};

struct Inventory
{
    Qstring name;
    float price;
    int quantity;
    bool selling;
};

class Warehouse
{
public:
    Warehouse();
    ~Warehouse();

private:
    Qvector<Transaction> transHistory;
    Qvector<Inventory> inventory;
};

#endif // WAREHOUSE_H
