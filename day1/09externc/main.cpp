#include <iostream>

extern "C"{
    #include "mystr.h"
}

using namespace std;

//C++ 完全兼容C语言，如果c是源代码的方式给出，重新编译是没有问题的
//但是像c标准库一样，.so

//  extern "C" 避免命名倾轧

int main()
{
    char *p = "china";
    int n = myStrlen(p);
    cout<<"n = "<<n<<endl;
    return 0;
}
