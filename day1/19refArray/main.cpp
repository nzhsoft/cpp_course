#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1,2,3,4};
    int *  const& parr = arr;

    for(int i=0; i<10; i++)
    {
        cout<<parr[i]<<endl;
    }

    int (&rarr)[10]  = arr;

    cout<<"sizeof(rarr) = " <<sizeof(rarr)<<"sizeof(arr)"<<sizeof(arr)<<endl;


    return 0;
}
