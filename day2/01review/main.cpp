#include <iostream>
#include <stdio.h>

using namespace std;

void foo(int a = 4);

int main()
{
    char buf[1024];
    cin>>buf;

    cout<<buf<<endl;
    return 0;
}

void foo(int a = 4)
{
    cout<<"abcde"<<endl;
}
