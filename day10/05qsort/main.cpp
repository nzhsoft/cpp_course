#include <iostream>
using namespace std;


template <typename T>
void quickSort(T *p,int low ,int high)
{
    if(low<high)
    {
        int l = low, h = high;
        T pivot = p[l];
        while(l<h)
        {
            while(p[h]>=pivot && l<h)
               h--;
            p[l] = p[h];
            while(p[l]<=pivot && l<h)
               l++;
            p[h] = p[l];
        }
        p[l] = pivot;

        quickSort(p,low,l-1);
        quickSort(p,l+1,high);
    }
}

int main()
{
    double arr[8] = {1,2,3,8,7,6,4,5};
    quickSort<double>(arr,0,7);

    for(auto i:arr)
        cout<<i<<endl;


    string sarr[8] = {"aa","bbbbbb","cccccc","xxxx","yxxx","zxxx","mxxx","xxx"};
    quickSort<string>(sarr,0,7);

    for(auto i:sarr)
        cout<<i<<endl;

    return 0;
}
