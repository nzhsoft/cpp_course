#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char ** p = new char*[10];

    for(int i=0; i<10; i++)
    {
        p[i] = new char[100];
    }

    for(int i=0; i<10; i++)
    {
        delete []p[i];
    }

    delete []p;

    string str = "china";
    cout<<str[3]<<endl;

    char buf[1024];
    strcpy(buf,str.c_str());
    cout<<buf<<endl;


    return 0;
}
