#include <iostream>

using namespace std;


class Complex
{
public:
    Complex(double r=0, double i=0):real(r),image(i){}
    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }
    Complex & operator=(const Complex & another)
    {
        this->real = another.real;
        this->image = another.image;
        return *this;
    }

    const Complex operator +(const Complex &another)
    {
        Complex sum;
        sum.real = this->real + another.real;
        sum.image = this->image + another.image;
        return sum;
    }

private:
    double real;
    double image;
};




int main()
{
    Complex a(1,2),b(4,5);
//    a = b; //a.operator =(b);
//    Complex s = a + b; //operator+(a,b) a.operator+(b)
    Complex s = a.operator +(b);
    b.dumpFormat();
    a.dumpFormat();
    s.dumpFormat();

    int x, y ,z;
    (x = y) = z;
    (x+y) = z;

    (a+b) = s;

    return 0;
}
