#include <iostream>
using namespace std;

//≤Ω÷Ë
//a += b; b += c; a += b += c; (a += b ) += c;

class Complex
{
public:
    Complex(double r=0, double i=0):real(r),image(i){}
    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }

    Complex& operator +=(const Complex & another)
    {
        this->real += another.real;
        this->image += another.image;
        return *this;
    }

private:
    double real;
    double image;
};
int main3()
{
    int  a = 10; int b = 20; int c = 30;
    (a += b) += c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    Complex ca(10,0),cb(20,0),cc(30,0);

    (ca += cb) += cc;
    ca.dumpFormat();
    cb.dumpFormat();
    cc.dumpFormat();


}

int main2()
{
    int  a = 10; int b = 20; int c = 30;
    a += b += c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    Complex ca(10,0),cb(20,0),cc(30,0);

    ca.operator +=(cb.operator +=(cc));
//    ca += cb += cc;

    ca.dumpFormat();
    cb.dumpFormat();
    cc.dumpFormat();

    return 0;
}



int main()
{
    int  a = 10; int b = 20; int c = 30;
    a += b;
    b += c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    Complex ca(10,0),cb(20,0),cc(30,0);

    ca += cb;
    cb += cc;

    ca.dumpFormat();
    cb.dumpFormat();
    cc.dumpFormat();

    return 0;
}
