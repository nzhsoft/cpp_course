#include <iostream>

using namespace std;

class A
{
public:
    virtual ~A(){}
};

class B:public A{};
class C:public A{};

class D{};

int main()
{
    //upcast

    A *p  = new B;

    B *pb;
    pb = dynamic_cast<B*>(p);
    if(pb != nullptr)
        cout<<"pb-> new B"<<endl;
    C *pc;
    pc = dynamic_cast<C*>(p);
    if(pc != nullptr)
        cout<<"pc-> new B"<<endl;
    else
        cout<<"pc = null"<<endl;


    D* pd;
    pd = dynamic_cast<D*>(p);
    if(pd != nullptr)
        cout<<"pd-> new B"<<endl;
    else
        cout<<"pd = null"<<endl;


    return 0;
}
