#ifndef MYSTACK_H
#define MYSTACK_H

class stack
{
public:
    void init();
    bool isFull();
    bool isEmpty();
    char pop();
    void push(char ch);
private:
    int top;
    char space[1024];
};

#endif // MYSTACK_H
