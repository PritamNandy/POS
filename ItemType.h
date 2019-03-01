#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <fstream>
#include <iostream>
using namespace std;

enum RelationType {LESS, GREATER, EQUAL};

struct ProductInfo
{
    string code;
    string name;
    int price;
};

class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType) const;
    void Initialize(string,string,int);
    void Print() const;
    ProductInfo PI;

private:

};

#endif // ITEMTYPE_H
