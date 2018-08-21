#include <iostream>

using namespace std;

int main()
{
    int a; int b = 300;
    int c = 100;
    (a = b) = c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;


    (a>b? a:b) = 200;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;


    return 0;
}
