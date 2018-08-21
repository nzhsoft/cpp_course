#include <iostream>
using namespace std;

//sender<<mail   sender.operator<<(mail)    operator<<(sender,mail)

//cin>>c;       //cin.operator>>(c)
//cout<<c;      //cout.operator<<(c)


class Complex
{
public:
    Complex(double r=0, double i=0):real(r),image(i){}

    friend istream & operator>>(istream &ci,Complex &c)
    {
        ci>>c.real;
        ci>>c.image;
        return ci;
    }

    friend ostream &operator<<(ostream &co,Complex &c)
    {
        co<<"("<<c.real<<","<<c.image<<")"<<endl;
        return co;
    }

private:
    double real;
    double image;
};

int main()
{
    Complex c,c1;
//    cin>>c>>c1;       //operator>>(cin,c)
//    cout<<c<<c1;      //operator<<(cout,c)

    cin>>c>>c1;
    cout<<c<<c1;
    return 0;
}
