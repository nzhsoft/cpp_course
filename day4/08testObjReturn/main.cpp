#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<this<<" constructor"<<endl;
    }
    ~A()
    {
        cout<<this<<" destructor"<<endl;
    }
    A(const A & another)
    {
        cout<<this<<" copy from "<<&another<<endl;
    }
    A& operator=(const A & another)
    {
        cout<<this<<" operator ="<<&another<<endl;
        return *this;
    }
};

A & foo()
{
    A a;
    return a;
}

int main()
{
    A t = foo();
    return 0;
}

#if 0
A foo()
{
//    return A();
    A a;
    return a;
}

int main()
{
    A r;
    r = foo();
    return 0;
}

#endif

#if 0
A foo()
{
//    return A();
    A a;
    cout<<&a<<endl;
    return a;
}

int main()
{
    A r = foo();
    cout<<&r<<endl;
    return 0;
}

#endif

#if 0
void func(A &a)
{

}

int main()
{
    A a;
    func(a);
    return 0;
}

#endif
