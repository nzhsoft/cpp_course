#include <iostream>
using namespace std;
int main()
{
    int integerVal;
    cout << "Before a bad input operation:"
         << "\n cin.eof(): " <<cin.eof()
         << "\n cin.fail(): " <<cin.fail()
         << "\n cin.bad(): " <<cin.bad()
         << "\n cin.good(): " <<cin.good()<<endl;
    cin>>integerVal; // control + D/Z
    cout << "After a bad input operation:"
         << "\n cin.eof(): " <<cin.eof()
         << "\n cin.fail(): " <<cin.fail()
         << "\n cin.bad(): " <<cin.bad()
         << "\n cin.good(): " <<cin.good()<<endl;
    cin.clear();
    cout<< "\n cin.eof(): " <<cin.eof()
        << "\n cin.fail(): " <<cin.fail()
        << "\n cin.bad(): " <<cin.bad()
        << "\n cin.good(): " <<cin.good()<<endl;
    return 0;
}
