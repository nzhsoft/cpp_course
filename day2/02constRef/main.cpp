#include <iostream>

using namespace std;
void func(const int&a)
{

}

int main()
{
    int a;
    int &ra = a;
    int *p = &a;
    int *&p1 = p;
     int *const&p2 = &a;

//    cout<<&a<<&ra<<&raa<<&rb<<endl;


//    double b = 10.0;

//    const int &crb = b;


    return 0;
}
