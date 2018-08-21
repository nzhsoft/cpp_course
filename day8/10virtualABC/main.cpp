#include <iostream>
using namespace std;

//virtual 声明型关键字，用于声明一个函数，虚，子类覆写了的函数，也是virtual
//覆写 同名，同参，同返回  override
//虚函数在子中的，访问属性并不影响多态。具体需求，要看子类。


class A
{
public:
    virtual void foo()= 0;
};
class B:public A
{
};
class C:public B
{
public:
    virtual void foo()
    {
        cout<<"C::foo"<<endl;
    }
};

int main()
{
    A a;
    B b;
    return 0;
}
