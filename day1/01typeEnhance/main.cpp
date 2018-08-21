#include <iostream>
using namespace std;

//void *   char *
//const int
//const int *    int *
//int(*p)[3]     int *
int main()
{
    char *p = (char*)malloc(100);
    const int a = 100;

    const int *q = &a;
//    *q = 200;

    int arr[2][3];  //int (*)[3]
    int (*pa)[3]  = arr;

    return 0;
}
