#include <iostream>
using namespace std;


//指针的引用 有， 引用的指针  无


//void mySwap(char *p, char*q)
//{
//    char *t = p;
//    p = q;
//    q = t;
//}

void mySwap(char **p, char**q)
{
    char *t = *p;
    *p = *q;
    *q = t;
}

void mySwap(char * & pra,char * & prb)
{
    char *t = pra;
    pra = prb;
    prb = t;
}

int main()
{
    char *p = "china";
    char *q = "canada";


    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;

//    mySwap(&p, &q);
//    char *t = p;
//    p = q;
//    q = t;

    mySwap(p,q);

    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;


    return 0;
}
