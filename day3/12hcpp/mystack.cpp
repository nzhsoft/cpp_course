#include "mystack.h"


Stack::Stack(int size)
    :top(0),spaceSize(size),space(new char[size]{0})
{
}

Stack::~Stack()
{
    delete []space;
}
bool Stack::isFull()
{
    return top == spaceSize;
}

bool Stack::isEmpty()
{
    return top == 0;
}

void Stack::push(char ch)
{
    space[top++] = ch;
}

char Stack::pop()
{
    return space[--top];
}
