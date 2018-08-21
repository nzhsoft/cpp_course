#include <iostream>
using namespace std;


//mystring::mystring(const  mystring & another)
//{
//    int len = strlen(another._str);
//    _str = new char[len+1];
//    strcpy(_str,another._str);
//}

//声明为谁的友元，就可以通过谁的对象，访问谁的私有成员

class Complex
{
    friend Complex operator+(Complex &c1, Complex & c2);
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

Complex operator+(Complex &c1, Complex & c2)
{
    Complex c;
    c.real = c1.real +c2.real;
    c.image = c1.image + c2.image;
    return c;
}

int main()
{
    Complex c1(1,2),c2(3,4);
    Complex sum;
    sum  = c1 + c2;
    sum.dumpFormat();
    return 0;
}
