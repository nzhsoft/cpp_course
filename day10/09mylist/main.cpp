#include <iostream>

#include "mylist.hpp"

using namespace std;
using namespace listspace;

//类模板中的友元
//1在声明处 推荐
//2在类外的定义处
//@1 在类中声明 <>  表明，是个声明
//@2 在类外实现
//@3 在类的声明的前面，作前向声明，并且在其前作类的前向声明

//模板通常会将声明和实现，放在一个文件中即hpp中。
//C/C++中的编译模式是，按文件进行编译. 在任何需要实例化的地方，都需要看到模板的全貌。
int main( )
{
    GenericList<int> first_list(2);
    first_list.add(1);
    first_list.add(2);

    cout<<first_list<<endl;

    GenericList<char> second_list(10);
    second_list.add('A');
    second_list.add('B');
    second_list.add('C');

    cout<<second_list<<endl;
    return 0;
}
