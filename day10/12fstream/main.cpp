#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fs("abc.txt",ios::in|ios::out|ios::trunc);  //"w+"
    if(!fs)
        cout<<"open error"<<endl;

    fs<<1<<" "<<2<<" "<<3;
    fs.seekg(0,ios::beg);
    int a, b, c;
    fs>>a>>b>>c;
    cout<<"a = "<<a<<"b = "<<b<<"c = "<<c<<endl;

    return 0;
}
