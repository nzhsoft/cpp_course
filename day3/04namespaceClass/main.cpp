#include <iostream>

using namespace std;

namespace  xxx
{
    int a = 120;
    void dis();
}
void xxx::dis()
{
    cout<<a<<endl;
}

int main()
{
    xxx::dis();
    return 0;
}
