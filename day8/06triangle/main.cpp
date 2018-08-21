#include <iostream>
using namespace std;



//1数据冗余的问题  2访问方便

//三角转四角的问题

//1 提取各父类中，相同的成员，构成祖父类
//2 让各父类，继承祖父类
//3 虚继承是一种继承的扩展, virtual 继承祖父类
//4 虚继承也是一种设计的结果。


class A
{
protected:
    int _data;
};


class X: virtual public A
{
public:
    X(int d){
        cout<<"X()"<<endl;
        _data = d;
    }
    void setData( int d)
    {
        _data = d;
    }


};

class Y:virtual public A
{
public:
    Y(int d){
        cout<<"Y()"<<endl;
        _data = d;
    }
    int getData()
    {
        return _data;
    }
};

class Z:public X,public Y
{
public:
    Z(int i,int j)
        :X(i),Y(j)
    {

    }

    void dis()
    {
//        cout<<X::_data<<endl;
//        cout<<Y::_data<<endl;  //ambiguous
        cout<<_data<<endl;
    }

};

int main()
{
    Z  z(100,200);
    z.dis();
    cout<<"+++++++++++++++"<<endl;
    z.setData(100000);
    cout<<z.getData()<<endl;
    cout<<"+++++++++++++++"<<endl;
    z.dis();
    return 0;
}
