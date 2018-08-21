#include <iostream>

using namespace std;

void func(float a)
{
    cout<<"float"<<endl;
}

void func(double a)
{
    cout<<"doulbe"<<endl;
}


int main()
{
    cout<<sizeof(1.3)<<endl;
    func(1.3f);
}

int main1()
{
    FILE *pf = fopen("xx.txt","r+");
    if(pf == NULL)
    {
        printf("open error");
        exit(-1);
    }
    string s;
    char buf[1024];
    fgets(buf,1024,pf);
    s = buf;
    cout<<s<<endl;
    fgets(buf,1024,pf);
    s = buf;
    cout<<s<<endl;
    fgets(buf,1024,pf);
    s = buf;
    cout<<s<<endl;
    int a;
    return 0;
}
