#include <iostream>

using namespace std;

//protected 在外部访问的时候，等价于private
//在public继承中，可见

//继承方式，不影响派生类成员的访问方式，影响了父类的成员，在子类内部和对象访问权限

//父类       public               protected            private
//public
//子类       public               protected             不可见

class A
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};


class B: public A
{
public:
    void func()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
//        cout<<pri<<endl;  //不可见
    }

    int pubb;
protected:
    int prob;
private:
    int prib;
};

class C:public B
{
public:
    foo()
    {
        cout<<pro<<endl;
    }

};


int main()
{
//    B  b;
//    b.pub;
//    b.pro;
//    b.pri;

    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    return 0;
}
