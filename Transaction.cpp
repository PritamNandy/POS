#ifndef TRANSACTION_CPP
#define TRANSACTION_CPP
#include"Transaction.h"
#include<iostream>
#include<ctime>
#include<fstream>
using namespace std;

template<class ItemType>
Transaction<ItemType>::Transaction()
{

}

template<class ItemType>
void Transaction<ItemType>::Time()
{
    time_t now = time(0);
    struct tm * timenow = localtime(&now);
    cout<<"                 "<<timenow->tm_mday<<"/"<<timenow->tm_mon+1<<"/"<<timenow->tm_year+1900<<endl;
    cout<<"                 "<<timenow->tm_hour<<":"<<timenow->tm_min<<":"<<timenow->tm_sec<<endl;
}
template<class ItemType>

double Transaction<ItemType>::Vat(double amount)
{
    double vat = ((amount*Vat_Amount)/100.0);
    return vat;
}

template<class ItemType>
double Transaction<ItemType>::Discount(double amount,bool ISMember)
{
    double discount;
    if(ISMember==true)
       discount = ((amount*10)/100.0);
    else
        discount =0;

        return discount;
}

template <class ItemType>
double Transaction<ItemType>::TotalAmount(double amount,bool found)
{
    if(found==false)
        return(amount-(Vat(amount)));
    if(found==true)
        return (amount-(Discount(amount,true))+Vat(amount));
}

template<class ItemType>
double Transaction<ItemType>::AmountChange(double amount1,double amount)
{
    return (amount-TotalAmount(amount1,false));
}


template <class ItemType>
void Transaction<ItemType>::PrintSlip(double amount,double amount1,bool found)
{
    cout << endl << "      Welcome to Point of Sale System!"
         << endl << "-------------------------------------------------------"<<endl;
           Time();
           cout<<endl;
           cout<<endl;
         cout << "          Purchase Amount: TK." << amount
         << endl << "              Vat(6%): TK." << Vat(amount)<<endl;
         if(found==true)
            cout<< "             Discount: TK." << Discount(amount,found)<<endl;
         else
            cout<<"             Discount: TK." << Discount(amount,found)<<endl;
          cout << "--------------------------------------------------------"
         << endl << "                Total: TK." << TotalAmount(amount,found)<<endl;
         cout<<"         Customer Given Amount :  TK"<< amount1
         <<endl<<"-------------------------------------------------------"
         <<endl<<"          Change Money Amount     TK"<<AmountChange(amount,amount1)<<endl;
}
#endif // TRANSACTION_CPP
