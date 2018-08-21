#include<iostream>
#include <fstream>
using namespace std;
class A
{
public:
    A(){}
    ~A(){}
    operator void* ()const
    {
        cout<<"operator void* () cast to void*; ";
        return (void *)this;
    }
    bool operator!() const
    {
        cout<<"bool operator!() return bool; ";
        return true;
    }
};
int main()
{
    A a;
    while(a)
    {
        cout<<"first"<<endl;
        break;
    }

    if(!a) cout<<"second"<<endl;
    return 0;
}

int main1()
{
    fstream  fs("abc.txt",ios::in);
    if(fs.operator!()) //
        cout<<"open error"<<endl;

    char ch;
    while(cin>>ch)  //while(cin)  //cin   bool   int  void *
    {
        cout<<ch<<endl;
    }

    return 0;
}
