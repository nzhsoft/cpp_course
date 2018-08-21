#include <iostream>

using namespace std;

class A
{
public:



//private:
    static const int a = 100;  //data ro
};



int main()
{
    A a;
    cout<<A::a<<endl;
    return 0;
}
