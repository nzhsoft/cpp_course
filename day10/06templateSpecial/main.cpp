#include <iostream>
#include <string.h>
using namespace std;


template<typename T>
int compare(T a, T b)
{
    if(a>b)
        return 1;
    else if(a<b)
        return -1;
    else
        return 0;
}
template<> int compare<const char *>(const char * a,const char *b)
{
    cout<<"template<> int compare<const char *>"<<endl;
    if(strcmp(a,b)>0)
        return 1;
    else if(strcmp(a,b)<0)
        return -1;
    else
        return 0;
}



int main()
{
    int a = 10; int b = 20;
    cout<<compare(a,b)<<endl;

    string sa = "abc"; string sb = "Abc";
    cout<<compare(sa,sb)<<endl;


    const char *ca = "abc";  const  char *cb = "Abc";
    cout<<compare(ca,cb)<<endl;
    return 0;
}
