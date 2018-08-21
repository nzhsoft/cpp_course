#include <iostream>
#include "b.h"
using namespace std;


//static 共享，协作


//static 修饰数据成员，需要初始化，不可以类内初始化
//类外初始化，需要类名空间，且，不需static

//类的声明与实现分开的时候，初始化，在.h .cpp中？ .cpp中
//大小，static声明的数据成员，不占用类对象的大小，存储在data rw段
//命名空间，即类名，A
//访问,既可以通过对象访问，也可以不通过对象，直接通过类型访问。


class A
{
public:
    int _m,_n;
    static int _share;
};

int A::_share  = 200;


int main()
{
//    A a;
//    cout<<a._share<<endl;
    A::_share = 500;
    cout<<A::_share<<endl;
    return 0;
}

int main1()
{
    A a;
    cout<<a._n<<endl;
    cout<<a._m<<endl;
    cout<<a._share<<endl;

    cout<<sizeof(A)<<sizeof(a)<<endl;

   return 0;
}
