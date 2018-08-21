#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(nullptr));
    vector<int>  vi;
    for(int i=0; i<10; i++)
    {
        vi.push_back(rand()%100);
    }
    sort(vi.begin(),vi.end(),[](int x,int y){return x<y;});

    for(auto i:vi)
        cout<<i<<endl;

    return 0;
}
