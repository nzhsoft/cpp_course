#include <iostream>
using namespace std;


//类型参数化  设置默认类型

class MyType
{
public:
    MyType(int x, int y):_x(x),_y(y){}
    int _x;
    int _y;
};

template<typename T = int>
void myswap(T & a, T &b){
    T  t = a;
    a = b;
    b = t;
}
//函数模板   实例化   模板函数      模板函数的调用
//myswap    ->     myswap<int> ->myswap<int>(1,2)

int main()
{
    int a = 3; int b = 4;
    myswap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;

    string s1 = "china"; string s2 = "america";
    myswap(s1,s2);
    cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;

    double d1 = 3.1; double d2  = 4.1;
    myswap(d1,d2);
    cout<<"d1 = "<<d1<<" d2 = "<<d2<<endl;

    MyType mt1(1,2); MyType mt2(3,4);
    myswap(mt1,mt2);
    cout<<mt1._x<<mt1._y<<endl;



    return 0;
}
