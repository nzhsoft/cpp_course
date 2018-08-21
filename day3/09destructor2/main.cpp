#include <iostream>

using namespace std;

//析构器是不是必须的,
//在没有堆空间对象中,默认的就好,在对象有堆空间的情形下,必须

//析构器自动调用,在什么时调用,对象销毁时


//1 与类名同 无参 无返回 前面加一个~
//2 在对象被销毁前,自动调用,被调用用于处理清理工作(堆对象)
//3 在对象被销毁前,栈上对象,堆上的对象

//4 系统提供一个空体析构器

// void initList()
// void destroyList()


class Stack
{
public:
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

    ~Stack()
    {
        cout<<"xxxxxxxxxxxx"<<endl;
        delete []space;
    }
private:
    int  top;
    int  spaceSize;
    char *space;

};

int main()
{
    {
        Stack s;
    }

    Stack *ps = new Stack(1000);
    delete ps;

    return 0;
}
