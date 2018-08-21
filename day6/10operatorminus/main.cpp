#include <iostream>
using namespace std;


//≤Ω÷Ë
//-n      -n = 10      - ( -n);

class Complex
{
public:
    Complex(double r=0, double i=0):real(r),image(i){}
    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }

    const Complex operator-() const
    {
        return Complex(-this->real,-this->image);
    }

private:
    double real;
    double image;
};


int main()
{
    int n = 5;
    -(-n);
    cout<<-(-n)<<endl;

    Complex c(5,0);
    -(-c);
//    (c.operator -()).operator -();

    c.dumpFormat();
    return 0;
}

#if 0
int main1()
{
    int n = 5;
    -n = 10;
    cout<<-n<<endl;
    cout<<n<<endl;

    Complex c(5,0);
    Complex cc = -c;
    -cc  = Complex(10,0);
    cc.dumpFormat();
    c.dumpFormat();

    return 0;
}

#endif
