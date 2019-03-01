#ifndef SALESMAN_CPP
#define SALESMAN_CPP
#include "SalesMan.h"
#include <queue>
using namespace std;

template <class ItemType>
SalesMan<ItemType>::SalesMan()
{

}

/*template <class ItemType>
bool SalesMan<ItemType>::PassWordRight(string id, string pass, queue<ItemType>& IDQ, queue<ItemType>& PASSQ)
{
    string ID,PASS;
    int count = 0;
    bool found = false;
    while(count!=3)
    {
    if(!IDQ.empty())
    {
        //cout << "FuckME";
        //cout << "FuckME";
        ID = IDQ.front();
        //cout << IDQ.front();
        IDQ.pop();
        PASS = IDQ.front();
        //cout << IDQ.front();
        IDQ.pop();
        PASSQ.push(PASS);
        PASSQ.push(ID);
        //PASSQ.push(PASS);
        //PASSQ.push(ID);
        count++;
        if(ID == id && PASS == PASS)
            return true;
        else
            found = false;

    }
    else
    {
        ID = PASSQ.front();
        PASSQ.pop();
        PASS = PASSQ.front();
        PASSQ.pop();
        IDQ.push(PASS);
        IDQ.push(ID);
        count++;
        if(ID == id && PASS == PASS)
            return true;
        else
            found = false;

    }
    }
    return found;
    while(!IDQ.empty() || PASSQ.empty())
    {
        //string id1=IDQ.front();
        //IDQ.pop();
        //string pass1=PASSQ.front();
        //PASSQ.pop();
        if(IDQ.front()==id &&PASSQ.front()==pass)
        {
            IDQ.pop();
            PASSQ.pop();
            return true;
        }
           // return true;
        else if(IDQ.front()!=id &&PASSQ.front()!=pass ){
            IDQ.pop();
            PASSQ.pop();
            found=false;
           // IDQ.push(id1);
            //PASSQ.push(pass1);
        }

    }
}*/

template<class ItemType>
bool SalesMan<ItemType>::SalesProduct(string productCode,bool &found)
{
    //found=SP.Search(productCode);
    if(found==false)
    cout<<"Invalid Item!!!!Search Another!!!!"<<endl;
    else if(found==true)
        return found;

    return found;
}

#endif // SALESMAN_CPP
