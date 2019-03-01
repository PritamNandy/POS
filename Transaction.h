#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<iostream>
using namespace std;
const double Vat_Amount=6;

template<class ItemType>
class Transaction
{
public:
    Transaction();
    void Time();
    double Vat(double);
    double Discount(double,bool);
    double TotalAmount(double,bool);
    void PrintSlip(double,double,bool);
    double AmountChange(double,double);
private:

};

#include"Transaction.cpp"
#endif // TRANSACTION_H
