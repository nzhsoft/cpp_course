#include <iostream>
#include <typeinfo>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
        cout<<"&a:"<<&a<<endl;
        cout<<"A-this "<<this<<endl;
        cout<<"type A this "<<typeid(this).name()<<endl;
    }

    int a;
};
class B:public A
{
public:
    B()
    {
        cout<<"B()"<<endl;
        cout<<"&b:"<<&b<<endl;
        cout<<"B-this "<<this<<endl;
        cout<<"type B this "<<typeid(this).name()<<endl;
    }

    int b;
};

class C:public B
{
public:
    C()
    {
        cout<<"C()"<<endl;
        cout<<"&c:"<<&c<<endl;
        cout<<"C-this "<<this<<endl;
        cout<<"type C this "<<typeid(this).name()<<endl;
    }

    int c;
};

int main()
{
    C  cc;
    cout<<"&cc:"<<&cc<<endl;
    return 0;
}
