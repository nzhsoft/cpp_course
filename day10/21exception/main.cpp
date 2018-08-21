#include <iostream>

using namespace std;

//通过声明的方式，告知，调用方，如何处理
void func() throw(char)
{
    throw 'a';
}
//什么都没有写的情况-> 上抛
//写点什么,处理自己可以处理的部分 ，若无匹配上抛
void foo()
{
    try
    {
        func();
    }catch(int i)
    {
        cout<<"foo() catch "<<i<<endl;
    }catch(...) //若无匹配，写日志上抛
    {
        cout<<"log throw up"<<endl;
        throw;
    }
}
int main()
{
    try{
        foo();
    }catch(int i){
        cout<<"main() catch int "<<i<<endl;
    }catch(double i){
        cout<<"main() catch double "<<i<<endl;
    }catch(...)
    {
        cout<<"Game over"<<endl;
    }
    return 0;
}
