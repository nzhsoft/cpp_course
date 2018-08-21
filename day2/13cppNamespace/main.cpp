#include <iostream>
using namespace std;

//C++中的命名空间，就是将全局无名命名空间再次划分的结果。

void foo()
{
   cout<<"foo"<<endl;
}
int mm =100;

int main()
{
    int mm = 200;
    printf("mm = %d\n",mm);
    std::cout<<::mm<<endl;
    ::foo();
    return 0;
}
