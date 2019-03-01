#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H
#include "SalesMan.h"
#include "ItemType.h"
using namespace std;

const int MAX_ITEMS=10;

struct NodeType
{
    ItemType info;
    NodeType *next;
};

class UnsortedType
{
public:
    UnsortedType();
    ~UnsortedType();
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    //ItemType GetItem(string,bool&);
    void InsertItem(ItemType);
    void deleteItem(ItemType);
    void ResetList();
    ItemType GetNextItem();
    void PrintItem();

private:
    NodeType *listData;
    int length;
    NodeType *currentPos;
};
#endif // UNSORTEDTYPE_H
