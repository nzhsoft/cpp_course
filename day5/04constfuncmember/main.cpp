#include <iostream>
using namespace std;

//const 修饰函数以后，承诺，不改变，在本函数不会发生，改变数据成员的行为。
//只能调用const成员函数

//const构成的重载函数，非const 对象，优先调用非const版本
//const 对象, 只能调用const版本，很多库常见提供两个版本

//inline   const  static  声明 和 定义


class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void foo();
    void foo() const ;
    static void func();

    inline  void xxx();

private:
    int _x;
    int _y;
};

void A::foo()
{
    cout<<"void foo()"<<endl;
    cout<<_x<<_y<<endl;
}

void A::xxx()
{

}

void A::func()
{

}

void A::foo()const
{
    cout<<"void foo() const"<<endl;
    cout<<_x<<_y<<endl;
}

int main()
{
    const A a(3,4);
    a.foo();
}

#if 0
class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void foo() const
    {
        cout<<_x<<_y<<endl;
        func();
    }

    void func() const
    {
        cout<<_x<<_y<<endl;
    }

private:
    int _x;
    int _y;
};

int main()
{
    A a(3,4);
    a.foo();
}

#endif

#if 0

//const 修饰，类函数成员，不可以修饰全局函数。
//const 构成的重载问题

int add(int &a, int& b)
{
    return a+b;
}

int add(const int &a, const int& b)
{
    return a+b;
}

class A
{
public:
    void foo()
    {
    }
    void foo() const
    {
    }
};



int main()
{
    int a = 3; int b  = 5;
    cout<<add(a,b)<<endl;

    cout<<add(3,6)<<endl;

    return 0;
}

#endif
