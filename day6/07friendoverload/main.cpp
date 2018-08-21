#include <iostream>
using namespace std;

//友元重载,即，全局函数重载
//但凡涉到自定义类型，想要跟普通数据类型一样的操作体验，就需要重载

//operator =

class Complex
{
//    friend Complex operator+(Complex &c1, Complex & c2);
//    friend Complex add(Complex &c1, Complex & c2);
public:
    Complex(double r=0, double i=0):real(r),image(i){}

    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }


private:
    double real;
    double image;
};

//Complex operator+(Complex &c1, Complex & c2)
//{
//    Complex c;
//    c.real = c1.real +c2.real;
//    c.image = c1.image + c2.image;
//    return c;
//}

//Complex add(Complex &c1, Complex & c2)
//{
//    Complex c;
//    c.real = c1.real +c2.real;
//    c.image = c1.image + c2.image;
//    return c;
//}


int main1()
{
    Complex c1(3,4),c2(5,6);
    Complex sum = c1 + c2; // operator+(c1,c2);
    sum.dumpFormat();

    int a; int b;
    int c = a + b;
    return 0;
}
