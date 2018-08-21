#include <iostream>

using namespace std;

namespace  ONE
{
    int x = 4;
    int y = 100;
}
namespace  ANOTHER
{
    int x = 14;
}

//第一种，用，第二种，少用，第三种，禁用

int main()
{
    {
        int x = 250;
        cout<<ONE::x<<endl;
        cout<<ANOTHER::x<<endl;
        cout<<x<<endl;
    }
    {
        using ONE::x; //using 释放
        cout<<x<<endl;
//        using ANOTHER::x;
//        cout<<x<<endl;
    }
    {
        using namespace ONE;
        cout<<x<<y<<endl;
        using namespace ANOTHER;
        cout<<x<<endl;
    }
    return 0;
}
