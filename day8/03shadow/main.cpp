#include <iostream>
using namespace std;

//void dump;
//void dis();
//void disBirth;
//void disdump;

//operator=
//Student::operator=


//shadow   override 覆写    overload

//shadow 在父子类中，出现了重名标识符(函数成员，数据成员)，就会构成，shadow。
//如果想访问被shadow的成员，加上父类的命名空间
//shadow  在父子类中 重名

class A
{
public:
    void foo(int i=0)
    {
        cout<<"A::void foo()"<<endl;
    }

    A &operator=(const A &)
    {
         cout<<"A &operator=(const A &)"<<endl;
    }
};

class B:public A
{
public:
    void foo()
    {
        cout<<"B::void func()"<<endl;
        foo();
    }

    B &operator=(const B &an)
    {
         cout<<"B &operator=(const B &)"<<endl;
         A::operator =(an);
    }

};


int main()
{
    B b;
    b.foo();
    return 0;
}
