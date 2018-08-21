#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>  si;

    char buf[1024];
    for(int i=0; i<10; i++)
    {
//        sprintf(buf,"abc%d",i);
        si.push(i);
    }

    while(!si.empty())
    {
        cout<<si.top()<<endl; si.pop();
    }
    return 0;
}
