#include <iostream>

using namespace std;

void foo(int & ri, char & rc)
{
    cout<<sizeof(ri)<<sizeof(rc)<<endl;
}

struct TypeC
{
    char c;
};
struct TypeP
{
    char *pc;
};
struct TypeR
{
    char &pr;
};

int main()
{
    int a; char c;
    foo(a,c);

    cout<<"sizeof(TypeC)"<<sizeof(TypeC)<<endl;
    cout<<"sizeof(TypeP)"<<sizeof(TypeP)<<endl;
    cout<<"sizeof(TypeR)"<<sizeof(TypeR)<<endl;


    int &ra = a;

    //本质是个指针，必须初始化，常指针,一经声明不可改变
    //int * const p

    return 0;
}
