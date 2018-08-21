#include <iostream>
using namespace std;


//const data member
//const func member
//const obj

//const 修饰的对象，其内可以有非const 数据成员,但不可修改。只能调用const 成员函数
//针对const有可能修饰对象，往往提供两个版本，构成重载

class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void dis()
    {
        cout<<_x<<_y<<endl;
    }
    void dis() const
    {
        cout<<_x<<_y<<endl;
    }

private:
    int _x;
    const int _y;
};

void func(const A & a)
{
    a.dis();
}

int main()
{
    const A a(3,4);
    a.dis();
    func(a);
    return 0;
}
