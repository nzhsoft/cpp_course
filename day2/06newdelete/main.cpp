#include <iostream>

using namespace std;

struct Stu
{
    char name[30];
    char sex;
    float score;
};

//2  3  5
//单变量   数组


int main()
{
    int *pi = new int(10);
    cout<<pi<<endl;
    cout<<*pi<<endl;


    string *p = new string("china");
    cout<<p<<endl;
    cout<<*p<<endl;


    char *q = "china";
    cout<<q<<endl;
    cout<<*q<<endl;

    return 0;
}

int main5()
{
    int *p = new int;
    delete p;

    int **pp = new int*[10];
    delete []pp;

    int (*ppp)[5] = new int[3][5];
    delete []ppp;
}

int main4()
{
    int (*p)[3][5] = new int[2][3][5];

    for(int i=0; i<2; i++)
    {
        for(int j=0;j<3; j++)
        {
            for(int k=0; k<5; k++)
            {

            }
        }
    }
}


int main3()
{
    int(*p)[5]  = new int[3][5];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            p[i][j] = i+j;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main2()
{
    float *p =  new float [10]{1.2,3.4};  // new float [10] m alloc(10*sizeof(float);
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<endl;
    }
    char **pp = new char *[11];
    for(int i=0; i<10; i++)
    {
        pp[i] = "china";
    }
    pp[10] = nullptr;
    while(*pp)
    {
        cout<<*pp++<<endl;
    }
}

int main1()
{
//    int *p = (int*)malloc(sizeof(int));
    int *p = new int(10);  //new
    *p = 100;
    cout<<*p<<endl;
    int **pp = new int *; // (int**)malloc(sizeof(int*))
    Stu *ps = new Stu;
    return 0;
}
