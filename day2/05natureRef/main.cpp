#include <iostream>

using namespace std;


void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void mySwap(int &ra, int &rb)
{
    int t = ra;
    ra = rb;
    rb = t;
}


int main()
{
    int a = 3; int b = 5;

    mySwap(&a,&b);
    mySwap(a,b);

    return 0;
}
