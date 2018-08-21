#include <iostream>
using namespace std;


void func(int a)
{
    printf("a = %d\n",a);
}
void func(int *p)
{
    printf("p = %d\n",p);
}

// NULL  0

int main()
{
    func(1);
    func((int*)1);
    func(nullptr);

    int *p = nullptr;

    return 0;
}
