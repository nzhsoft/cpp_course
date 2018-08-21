#include <iostream>

using namespace std;

//static_cast 在一个方向上可以隐式转化，在另一个方向上，可以显示的静态转化

int main()
{

    //双隐
    double d; int i;
    d = static_cast<double>(i);
    i = static_cast<int>(d);

    d = static_cast<double>(10)/3;
    cout<<d<<endl;

    //单隐

    void *p; int *q;
    q = static_cast<int*>(malloc(sizeof(10)*10));
    p = q;
    q = static_cast<int*>(p);

    return 0;
}
