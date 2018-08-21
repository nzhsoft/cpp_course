#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    void xxxx()
    {
        cout<<"xxxx"<<endl;
    }

    ~A()
    {
        cout<<"~A()"<<endl;
    }

};

void foo()
{
//    A a;
//    a.xxxx();

//    A *p = new A;
//    p->xxxx();
//    (*p).xxxx();
//    delete p;

//    auto_ptr<A> p(new A);
//    (*p).xxxx();
//    p->xxxx();
}

int main()
{
    foo();
    return 0;
}
