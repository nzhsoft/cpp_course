#include <iostream>

using namespace std;

//指针 数组有，  引用 数组 无

int main()
{
    int a, b, c;
    int *p[]  = {&a,&b,&c};  //int *  int **
    int & q[] = {a,b,c};    //int &   int & *

    return 0;
}
