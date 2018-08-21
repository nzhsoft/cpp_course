#include <iostream>

using namespace std;

#if 0
a=99          a = 5
b             b = 4;
#endif

//当子类，  不自实现时，默认调用父类的拷贝构造。
//若自实现，不作特殊处理， 此时只会调用父类的构造器,此时失去了拷贝构造的意义
//特殊处理 显示的调用父类的拷贝构造

//子类对象赋给父类的引用，赋值兼容


//当内嵌子对象，
//子类不自实现时拷贝构造，  默认调用内嵌子对象的拷贝构造。
//若自实现，不作特殊处理， 此时只会调用内嵌子对象的构造器, 此时失去了拷贝构造的意义
//特殊处理 显示的调用内嵌子对象的拷贝构造


class C
{
public:
    C()
    {
        cout<<"C()"<<endl;
    }
    C(const C & another)
    {
        cout<<" C(const C & another)"<<endl;
    }

};


class A
{
public:
    A(int x = 99)
    {
        cout<<"A()"<<endl;
        a = x;
    }
    A(const A & another)
    {
        this->a =another.a;
        cout<<" A(const A & another)"<<endl;
    }

    int a;
};

class B:public A
{
public:
    B(int x, int y)
        :A(x)
    {
        cout<<"B()"<<endl;
        b = y;
    }
    B(const B & another)
        :A(another),c(another.c)
    {
        this->b = another.b;
        cout<<"B(const B & another)"<<endl;
    }
    int b;

    C c;

};

int main()
{
    B b(199,200);         //199,200
    B bb(b);              //199,200

    cout<<bb.a<<endl;
    cout<<bb.b<<endl;
    return 0;
}
