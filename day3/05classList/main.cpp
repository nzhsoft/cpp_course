#include <iostream>
#include "mylist.h"
using namespace std;

int main()
{
    List l;
    l.initList();
    for(int i=0; i<10; i++)
        l.insertList(i);
    l.traverseList();
    l.traverseList();
    l.destroyList();

    return 0;
}
