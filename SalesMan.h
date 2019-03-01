#ifndef SALESMAN_H
#define SALESMAN_H
#include <iostream>
#include <ctime>
#include <fstream>
#include <queue>
#include "Administrator.h"
#include "SearchProduct.h"
using namespace std;

template <class ItemType>
class SalesMan
{
public:
    SalesMan();
    bool PassWordRight(string,string,queue<ItemType>&,queue<ItemType>&);
    bool SalesProduct(string,bool&);
    void SMInfo();

private:
    //SearchProduct<ItemType> SP;

};

#endif // SALESMAN_H
