#include <iostream>
using namespace std;

//可不可以设计一个方案，解决，浅

class A
{
public:
    A(){}
    ~A(){
        if(_str != nullptr)
        {
            delete _str;
            _str = nullptr;
        }
    }
    A(const A &){}
    A & operator=(const A &){
        return *this;
    }

    char * _str;
};


class Test
{
public:
    Test()
    {
        p = new char[1024];
    }

    char buf[1024];
    char *p;
};

int main()
{
//    Test *pt = new Test;
//    Test cppt = *pt;

    Test t;

    Test *pt = new Test;
    return 0;
}
