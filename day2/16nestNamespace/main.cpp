#include <iostream>

using namespace std;

namespace  ONE
{
    int x = 4;
    int y = 100;
    namespace  ANOTHER
    {
        int x = 14;
    }
}

int main()
{
//    cout<<ONE::ANOTHER::x<<endl;
    using ONE::x;
    using ONE::ANOTHER::x;
    cout<<x<<endl;
    return 0;
}
