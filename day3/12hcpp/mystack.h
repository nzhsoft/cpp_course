#ifndef MYSTACK_H
#define MYSTACK_H

class Stack
{
public:
    Stack(int size = 1024);
    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();
    ~Stack();
private:
    int  top;
    int  spaceSize;
    char *space;

};

#endif // MYSTACK_H
