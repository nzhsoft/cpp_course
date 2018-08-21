#include <iostream>

using namespace std;

int main()
{
    int a = 123456;
    string s = to_string(a);
    cout<<a<<endl;
    cout<<s<<endl;

    string s2 = "123abc";
    int data = stoi(s2);
    cout<<data<<endl;
    return 0;
}
