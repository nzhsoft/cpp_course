#include <iostream>
using namespace std;

//static 修饰成员函数，主要用来管理静态变量
//类内外，声明和定义

//静态成员函数，只能访问静态的成员。不能访问非静态的成员
//是因为，静态成员函数中没有this指针

//非静态函数，是可以访问静态的成员

class A
{
public:
    static void manageA();
    static void manageB(){}

    void foo()
    {
        cout<<a<<endl;
        manageA();
        manageB();
    }

private:
    static int a;
    int _x;
};

int A::a = 100;
void A::manageA()
{
    cout<<a<<endl;
    //    cout<<_x<<endl;
    //    foo();
    manageB();
}


int main()
{
    A a;
    a.foo();

    a.manageA();
    a.manageB();

    A::manageA();
    A::manageB();


    return 0;
}
