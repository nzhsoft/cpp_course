#include <iostream>
using namespace std;
int main()
{
    char ch[20];
    cin.get(ch,20,'/'); // i like c/ i like C++ also/
    cout<<"the first part is :"<<ch<<endl;

    cin.ignore(10, 'i');

    cin.putback('i');

    char peek = cin.peek();
    cout<<"peek is :"<<peek<<endl;
    cin.get(ch,20,'/');
    cout<<"this second part is:"<<ch<<endl;
    return 0;
}
