#include <iostream>

//传参与返回
using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }
    A(const A & another)
    {
        cout<<" A(const A & another)"<<endl;
    }
};

void foo(A& a)
{

}
int main()
{
    A a;
//    A b = a;

    foo(a);


    return 0;
}
