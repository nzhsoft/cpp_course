#include <iostream>

using namespace std;

class Base
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class Derive: protected Base
{
public:
    void foo()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
    }

    int a;
protected:
    int b;
private:
    int c;
};

class M:public Derive
{
    void foo()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
    }
};

int main()
{
    Derive d;
//    d.pub;
//    d.pro;
    return 0;
}
