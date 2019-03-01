#ifndef SEARCHPRODUCT_CPP
#define SEARCHPRODUCT_CPP
#include "SearchProduct.h"
using namespace std;

template<class ItemType>
SearchProduct<ItemType>::SearchProduct()
{

}

/*template<class ItemType>
void SalesMan<ItemType>::addProduct(ItemType item)
{
    adm1.AddProduct(it);
}*/

template<class ItemType>
bool SearchProduct<ItemType>::Search(string productCode)
{
    ItemType it;
    it.Initialize(productCode);
    bool found;
    //unsort.GetItem(it,found);
    if(found==true)
        return true;
    else
        return false;
}

#endif // SEARCHPRODUCT_CPP
