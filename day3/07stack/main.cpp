#include <iostream>
#include <string.h>

using namespace std;



//initial list  初始化列表 完成初始化(数据成员的)  效率很高
//初始化列表实始化顺序, 跟列表中的顺序无关.
//此列表不中要拿被初始化的成员去初始化其它
class Stack
{
public:
//    Stack(){
//        top = 0;
//        space = new char[1024];
//        memset(space,0,1024);
//        spaceSize = 1024;
//    }

    Stack(int size = 1024)
        :top(0),
         spaceSize(size),
         space(new char[size]{0})
    {
    }

    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();

private:
    int  top;
    int  spaceSize;
    char *space;

};

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


int main()
{
    //函数声明
    Stack s;            /*Stack ss;*/
    cout<<s.pop()<<endl;

    Stack s2(10);
    cout<<s2.pop()<<endl;
    return 0;
}
