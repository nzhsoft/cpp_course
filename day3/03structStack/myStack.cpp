#include "myStack.h"
#include <string.h>

//在类外定义成员函数，为了实现xxx.h xx.cpp
//不能把它定义成了全局，类名::进行限定

//:: 命令空间里面用过，类名，本质也是一个命名空间

void Stack::init()
{
    top = 0;
    memset(space,0,1024);
}

bool Stack::isFull()
{
    return top == 1024;
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



