#include <iostream>
#include <string.h>
using namespace std;

#define SQR(x) ((x)*(x))


inline int sqr(int x);

inline int sqr(int x)
{
    return x*x;
}

//宏函数的优点，内嵌，避免函数调用的开销，替换，代码膨胀
//函数数的优点，抽象，实现一次书写，n次调用，类型检查，调用开销
//inline函数，类型检查  内嵌

//inline   register  建议型关键字
//短小，而频繁使用的函数，才有可能被编译器采纳为真正的inline函数。

int main()
{
    int i=0;
    while(i<5)
    {
//         printf("%d\n",((i++)*(i++)));
        printf("%d\n",sqr(i++));
    }
    return 0;
}
