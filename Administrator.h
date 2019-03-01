#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "SalesMan.h"
#include "Transaction.h"
#include "SearchProduct.h"
#include "UnsortedType.h"
using namespace std;

template <class ItemType>
class Administrator
{
public:
    Administrator();
    void AddProduct(ItemType);

protected:
    void AmountSale(string);
    void TotalSale(int);
    void UpdateProduct(string);

private:
};
#include "Administrator.cpp"
#endif // ADMINISTRATOR_H
