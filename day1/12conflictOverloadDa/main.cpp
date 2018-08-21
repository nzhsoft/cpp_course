#include <iostream>
using namespace std;

//当实现同一功能，既可以用默认参数，又可用重载的时候，推荐使用默认参数。

//void func(int a)
//{
//}

void func(int a, int b = 3 )
{

}

int main()
{
    func(1,2);
    func(1);
    return 0;
}
