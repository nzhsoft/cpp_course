#include <iostream>
#include <string.h>
#include "myStack.h"

using namespace std;


//struct  默认全部是 public
//class   默认全部是 private

//xx.h   xx.c


//FILO  LIFO


//封装，包含两部分，一部分数据，一部分行为(接口)
//对外提供接口，隐藏数据  对内，数据开放。



int main()
{
    Stack s;
    s.init(); //初始化很重要

    for(char ch = 'a'; !s.isFull()&& ch<='a'+10; ch++)
        s.push(ch);
//    s.top = 0;
    while(!s.isEmpty())
        cout<<s.pop()<<'\t';
    cout<<endl;


    //    Stack s2;
    //    s2.init();

    //    for(char ch = 'm'; !s2.isFull()&& ch<='m'+10; ch++)
    //        s2.push(ch);
    //    while(!s2.isEmpty())
    //        cout<<s2.pop()<<'\t';
    //    cout<<endl;

    return 0;
}
