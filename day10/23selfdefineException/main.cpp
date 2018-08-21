#include <iostream>
using namespace std;

class MyException
{
public:
    MyException()
    {
        cout<<"MyException constructor"<<endl;
    }
    MyException(const MyException & )
    {
        cout<<"MyException copy constructor"<<endl;
    }
    ~MyException()
    {
        cout<<"~MyException destructor"<<endl;
    }
};


int divide(int x, int y)
{
    if(y == 0)
        throw(MyException());
    return x/y;
}
int myDivide(int x, int y)
{
    divide(x,y) ;
}
int main()
{
    try{
        myDivide(4,0);
    }catch(const MyException &a){ // &
        cout<<"catch self define myexception"<<endl;
    }
    return 0;
}
