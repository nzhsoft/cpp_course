#include <iostream>

using namespace std;

int main()
{
    double * pd[50];
    for(int i=0; i<50; i++)
    {
        pd[i] = new (nothrow)double[50000000];
        if(pd[i] == nullptr)
        {
            cout<<"new error"<<__FILE__<<" "<<__func__<<" "<<__LINE__<<endl;
            exit(-1);
        }
        cout<<i<<endl;
    }
    return 0;
}



void newError()
{
    cout<<"new error"<<endl;
    exit(1);
}

int main2()
{
    double * pd[50];

    set_new_handler(newError);

    for(int i=0; i<50; i++)
    {
        pd[i] = new double[50000000];
        cout<<i<<endl;
    }
    return 0;
}



int main1()
{
    double * pd[50];
    try
    {
        for(int i=0; i<50; i++)
        {
            pd[i] = new double[50000000];
            cout<<i<<endl;
        }
    }catch(std::bad_alloc & e){
        cout<<e.what()<<endl;
        printf("xxxxxxxxxxxxx");
    }


    return 0;
}
