#include "mylist.h"
#include <iostream>

void List::initList()
{
    head = new Node;
    head->next = nullptr;
}

void List::insertList(int data)
{
    Node * cur  = new Node;
    cur->data = data;

    cur->next = head->next;
    head->next = cur;
}

void List::traverseList()
{
    Node *sh  = head->next;
    while(sh)
    {
        std::cout<<sh->data<<std::endl;
        sh = sh->next;
    }
}

void List::destroyList()
{
    Node * t;
    while(head)
    {
        t = head;
        head = head->next;
        delete t;
    }
}
