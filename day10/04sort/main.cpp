#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double arr[8] = {1,2,3,8,7,6,4,5};
    sort(arr,arr+8,[](double x, double y){return x<y;});

    for(auto i:arr)
        cout<<i<<endl;


    string sarr[8] = {"a","b","c","x","y","z","m","x"};
    sort(sarr,sarr+8,[](string x, string y){return x<y;});

    for(auto i:sarr)
        cout<<i<<endl;
    return 0;
}
