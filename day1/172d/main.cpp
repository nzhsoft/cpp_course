#include <iostream>

using namespace std;

//指针的指针有，  引用的引用无， //可以对引用再次取引用，平行关系

int main()
{
    int *p;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;  //int* &   int & *

    int a;
    int &ra = a;
    int &rb = ra;
    int &rc = rb;

//    int&  & rra = ra;

    return 0;
}
