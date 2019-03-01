#ifndef ITEMTYPE_CPP
#define ITEMTYPE_CPP
#include "ItemType.h"

ItemType::ItemType()
{

}

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
    if(PI.name < otherItem.PI.name)
        return LESS;
    else if(PI.name > otherItem.PI.name)
        return GREATER;
    else return EQUAL;
}

void ItemType::Initialize(string code, string name, int price)
{
    PI.code = code;
    PI.name = name;
    PI.price = price;
}

void ItemType::Print() const
{
    cout << PI.name;
}

#endif // ITEMTYPE_CPP
