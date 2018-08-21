#include <iostream>
using namespace std;
int main()
{

//     double *p;
//     for(int i=0; i<1000; i++)
//     {
//         p = new double[900000];
//     }

    try{
        double *p;
        for(int i=0; i<1000; i++)
        {
            p = new double[900000];
        }
    }catch(std::bad_alloc &e){
        cout<<e.what()<<endl;
        exit(-1);
    }
    return 0;
}
