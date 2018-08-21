#include <iostream>

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

class SmartPtr
{
public:
    SmartPtr(A * pa)
    {
        _pa = pa;
    }

    A& operator*()
    {
        return *_pa;
    }
    A* operator->()
    {
        return _pa;
    }

    ~SmartPtr()
    {
        delete _pa;
    }


private:
    A *_pa;

};


void foo()
{
     SmartPtr sp(new A);
     (*sp).xxxx();     //operator.  -> operator*
     sp->xxxx();       //operator->
}

int main()
{
    foo();
    return 0;
}
