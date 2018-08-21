#include <iostream>

using namespace std;

class C
{
public:
    C(int i=0){

    }
    C(const C & another)
    {
        cout<<" C(const C & another)"<<endl;
    }
    C& operator=(const C & another)
    {
        cout<<" C& operator=(const C & another)"<<endl;
    }

};

class A
{
public:
    A(int i=0){

    }
    A(const A & another)
    {
        cout<<" A(const A & another)"<<endl;
    }
    A& operator=(const A & another)
    {
        cout<<" A& operator=(const A & another)"<<endl;
    }

};
class B:public A
{
public:
    B(int j)
        :A(j),c(j)
    {

    }
    B(const B & another)
        :A(another),c(another.c)
    {
        cout<<" B(const B & another)"<<endl;
    }

    B& operator=(const B & another)
    {
        if(this == & another)
            return *this;
        A::operator =(another);
        c = another.c;
        return *this;
    }

    C c;
};

int main()
{
    B b(1);
    B bb(1);
    bb = b;
    return 0;
}

#if 0

class A
{
public:
    A(){}
    ~A(){}
    A(const A &){}
    A& operator=(const A&){}
}

#endif
