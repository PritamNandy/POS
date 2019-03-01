#ifndef SEARCHPRODUCT_H
#define SEARCHPRODUCT_H
#include"Administrator.h"
//#include "UnsortedType.h"
#include<iostream>
#include<fstream>
using namespace std;
class UnsortedType;
template<class ItemType>
class SearchProduct
{
public:
    SearchProduct();
    bool Search(string);
    void addProduct(ItemType);
private:
    UnsortedType& UN;
    //Administrator<ItemType> adm1;
};


#include"SearchProduct.cpp"
#endif // SEARCHPRODUCT_H
