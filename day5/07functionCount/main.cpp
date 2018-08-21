#include <iostream>
using namespace std;
//int fooCount = 0;


//static 修饰函数，目的，为管理静态变量

class A
{
public:
    void foo()
    {
        cout<<"void foo()"<<endl;
        fooCount++;
    }
    static int invokefooCount()
    {
        return  fooCount;
    }

private:
    int _m,_n;
    static int fooCount;
};

int A::fooCount = 0;

int main()
{
    {
        A  a,b,c;
        a.foo();
        b.foo();
        c.foo();

        cout<<a.invokefooCount()<<endl;
    }
    cout<<A::invokefooCount()<<endl;



    return 0;
}
