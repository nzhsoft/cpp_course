#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mystack.h"
#include "mystack.cpp"
using namespace std;

//空间类型，压入类型，弹出类型




//函数模板        模板函数         函数函数
//myswap   ->    myswap<int> -> myswap<int>(a,b)

//类模板        模板类         类对象
//Stack        Stack<int>    Stack<int> s

int main()
{
    Stack<string>  s;

     if(!s.isFull())
            s.push("abc");
     if(!s.isFull())
            s.push("xxxx");
     if(!s.isFull())
            s.push("yyyy");

    while(!s.isEmpty())
    {
        cout<<s.pop()<<endl;
    }
    return 0;
}
