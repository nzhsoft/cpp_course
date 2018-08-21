#include <iostream>
using namespace std;

//const_cast 只作用于指针和引用,去const化
//const_cast理解为，const semantic 的补充
//非const 对象-->const引用/指针->去const->原非const 对象修改


//const 对象可不可以去const化

int main()
{
    const int a = 100;
    const int &ra = a;

    const_cast<int&>(ra) = 200;  //未定义行为。
    cout<<a<<endl;
    cout<<ra<<endl;


    struct Data
    {
        int a;
    };
    const Data d = {40}; const Data &rd = d;
    const_cast<Data&>(rd).a = 100;

    cout<<d.a<<endl;
    cout<<rd.a<<endl;

    return 0;
}


void foo(const int &a)
{
    const_cast<int&>(a) = 200;
}

int main1()
{
    int a;
    const int & ra = a;
    a = 100;
    cout<<a<<endl;
    const_cast<int&>(ra) = 300;
    cout<<ra<<endl;
    cout<<a<<endl;

    const int *p = &a;
    *const_cast<int*>(p)= 400;
    cout<<*p<<endl;

    foo(a);
    return 0;
}
