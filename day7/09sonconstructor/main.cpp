#include <iostream>
using namespace std;

//标配  1 空体无参，2 重载  3 默认

//子类的构造的过程中   父类， 内嵌子对象   子类

//调用父类的构造器, 标配会被调用。 没有标配，必须显示的调用
//或隐  必须有标配，   或显

//调用内嵌子对象的的构造器, 标配会被调用。 没有标配，必须显示的调用
//或隐  必须有标配，   或显


class C
{
public:
    C(int k)
    {
        cout<<"C()"<<endl;
        c = k;
    }

    int c;
};


class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a = i;
    }

    int a;
};

class B:public A
{
public:
    B(int i, int j,int k)
        :A(i),c(k)
    {
        cout<<"B()"<<endl;
       b = 10;
    }

    int b;
    C c;
};

int main()
{
    B b(3,5,10);
    cout<<b.a<<endl;
    cout<<b.b<<endl;
    cout<<b.c.c<<endl;

    return 0;
}
