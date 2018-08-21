#ifndef __MY_LIST_H__
#define __MY_LIST_H__


//句柄  FILE *  sqlite3*
//Node * head;

struct Node
{
    int data;
    struct Node *next;
};

class List
{
public:
    void initList();
    void insertList(int data);
//    Node * searchList();
    void traverseList();
    void destroyList();
private:
    Node *head;
};



#endif
