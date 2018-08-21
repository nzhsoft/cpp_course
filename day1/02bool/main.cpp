#include <iostream>
using namespace std;
int main()
{
    //'a'  12   12.3  "china"  true false
    bool flag = true;
    if(!flag)
    {
        printf("flag is true\n");
        flag = false;
    }

    printf("sizoef(bool) = %d sizeof(flag) = %d\n",
           sizeof(bool),sizeof(flag));

    return 0;
}
