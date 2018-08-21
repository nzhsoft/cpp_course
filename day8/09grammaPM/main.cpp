#include <iostream>
using namespace std;

//virtual 声明型关键字，用于声明一个函数，虚，子类覆写了的函数，也是virtual
//覆写 同名，同参，同返回  override
//虚函数在子中的，访问属性并不影响多态。具体需求，要看子类。


class A
{
public:
    virtual void foo()
    {
        cout<<"A:foo"<<endl;
    }
};
class B:public A
{
public:
//    virtual void foo() override
//    {
//        cout<<"B:foo"<<endl;
//    }
//    virtual int foo() override
//    {
//        cout<<"B:foo"<<endl;
//    }
//    virtual void foo(int a) override
//    {
//        cout<<"B:foo"<<endl;
//    }

//    virtual void foo() const override
//    {
//        cout<<"B:foo"<<endl;
//    }
    virtual void foo() override
    {
        cout<<"B:foo"<<endl;
    }
};

int main()
{
    B b;
    A *pa = &b;
    pa->foo();
    return 0;
}
