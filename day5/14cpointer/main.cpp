#include <iostream>
using namespace std;


void foo(int a)
{
    cout<<"foo"<<endl;
    return ;
}

int main()
{
    int a;
    int *pa = &a;

    void (*pf)(int a) = foo;

    pf(1);

    return 0;
}
