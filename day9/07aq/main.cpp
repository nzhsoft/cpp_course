#include <iostream>
using namespace std;
class A{
public:
    A(){
        p = this;
    }
    virtual void func(){
        cout<<"aaaaaaaaaaaaaaaa"<<endl;
    }
    void foo()
    {

        p->func();
    }

    ~A()
    {

    }

private:
    A *p;
};
class B:public A{
public:
    void func(){
        cout<<"bbbbbbbbbbbbbbbbb"<<endl;
    }
};
int main(){
    B b;
    b.foo();

    return 0;
}
