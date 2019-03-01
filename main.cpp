#include <iostream>
#include <fstream>
#include <ctime>
#include <queue>
#include"Transaction.h"
#include "SalesMan.h"
//#include "Administrator.h"
#include "UnsortedType.h"
#include "ItemType.h"
using namespace std;

int DateNow()
{
    time_t now = time(0);
    struct tm * timenow = localtime(&now);
    return(timenow->tm_mday);
}

void StoreIDPASS(queue<string> IDQ,queue<string> PASSQ,ifstream& inFile)
{
    string s,q;
    while(inFile>>s)
    {
        //inFile>>q;
        IDQ.push(s);
        //PASSQ.push(q);
    }
}

int main()
{
    //SalesMan<string> SM;
    UnsortedType UN;
    ItemType IT;
    queue<string> IDQ;
    queue<string> PASSQ;
    Transaction<double> TR;
    string id, pass;
    ifstream inFile;
    inFile.open("ID&PASS.txt");
    StoreIDPASS(IDQ,PASSQ,inFile);
    ofstream outFile;
    outFile.open("Time.txt");

    int n;
    cout << "Hello" << endl
         << "Enter Date: ";
    cin >> n;
    //SaleSystem ss;
    while(n!=DateNow())
    {
        cout << "Date is Not Correct. Please Check & Enter Again ";
        cin >> n;
    }
    /*bool found = false;
    while(found!=true)
    {

        cout << "Enter Your ID: ";
        cin >> id;
        cout << "Enter Your Password: ";
        cin >> pass;
        //StoreIDPASS(IDQ,PASSQ,inFile);
        found = sm.PassWordRight(id,pass,IDQ,PASSQ);
        cout << found << endl;
        if(found == false)
            cout<< "NOT FOUND!" << endl;
        else
            cout << "FOUND!" << endl;

    }*/
    /*double a,b;
    cin>>a;
     cin  >>b;
    bool f = false;
    TR.PrintSlip(a,b,f);*/
    //cout<<tr.Discount(a,f)<<endl;
    //cout<<tr.PrintSlip(a,f)<<endl;
    //cout<<tr.Vat(a)<<endl;

    //ss.GetTime(outFile);
    IT.Initialize("001","PS4",10000);
    UN.InsertItem(IT);
    UN.PrintItem();

}
