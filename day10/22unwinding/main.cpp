#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"A constructor"<<endl;
    }
    ~A()
    {
        cout<<"~A destructor"<<endl;
    }
};
int divide(int x, int y)
{
//     A a;
//     A *p = new A;
    auto_ptr<A> pa(new A);  //RAII
    if(y == 0)
        throw('a');
    return x/y;
}
int myDivide(int x, int y)
{
//    A b;
    divide(x,y) ;
}
int main()
{
    try{
        myDivide(4,0);
    }catch(int x){
        cout<<"x"<<endl;
        cout<<x<<endl;
    }catch(double y){
        cout<<"y"<<endl;
        cout<<y<<endl;
    }catch(...){
        cout<<"no x, no y"<<endl;
    }
    return 0;
}
