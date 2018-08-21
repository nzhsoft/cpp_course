#include <iostream>

using namespace std;

//const 修饰，类数据成员，必须要初始化
//const 初始化，一种情况在，类内. 另一种在，初始化列表 initial list
//initial list 一方面，效率的问题. 为了一些新扩展的功能，提供，解决场所或是办法
//const 修饰的数据成员，可以在非const函数中使用，但是不可以更改。

class A
{
public:
    A(int i):_i(i)
    {}
    void dis()
    {
        cout<<_i<<endl;
        _i = 200;
    }

private:
    const int _i;
};

int main()
{
    A a(100);
    a.dis();
    return 0;
}



#if 0

class A
{
public:
    A(int &zz):x(100),y(200),z(zz)
    {
        cout<<"const x = "<<x<<endl;
        this->y = 200;
        cout<<z<<endl;
    }

    void dis()
    {
        cout<<z<<endl;
    }

private:
    const int x; //const int x = 100;
    int y;
    int &z;
};

int main()
{
    int  z = 100;
    A a(z);
    a.dis();

    return 0;
}

#endif
