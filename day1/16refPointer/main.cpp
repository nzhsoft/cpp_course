#include <iostream>
using namespace std;

//指针的引用 有， 引用的指针  无

//引用的本质，是对指针的包装，避免使用裸露的指针。
//对于引用的指针类型，C++避免对引用再次开封


int main()
{
    int a;
    int *p =  &a;    int * &pr = p;
    int & ra = a;
    int &  *rpa=&ra;

    return 0;
}
