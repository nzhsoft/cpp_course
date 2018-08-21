#include <iostream>
using namespace std;

//函数重载，会出现重名的函数，重名的函数会根据语境来决定调用。
//运算符重载，也是一种函数重载
//也是一种简洁的需要

//重载的规则
//1 函数名相同，函数的参数，类型，个数，顺序不同，均可以构成重载
//2 函数返回值的类型不能作为构成重载的标志

//ambiguous  二义性

//匹配规则
//1,严格匹配
//2,严格匹配不满足，寻救是否有隐式转化

void foo(double a)    // foo_d
{
    printf("double");
}

void foo(long  b)    //foo_l
{
    printf("long ");
}
void foo(int  b)     //foo_i
{
    printf("long ");
}



int main()
{
    int a = 5;
    foo(a);  //foo_i

    double d;
    foo(a);  //foo_d

    return 0;
}


#if 0
int abs()
{}
float abs()
{}
int main()
{
    int a = abs();
    float b = abs();

    cout<<abs()<<endl;

}


void foo(int a){

}
void foo(int a,int b){

}

void foo(float a){

}
void foo(int a,float b){

}
void foo(float a, int b){

}




int main()
{
    return 0;
}



int abs(int a)
{
    return a>0? a:-a;
}
float abs(float a)
{
    return a>0? a:-a;
}

int main()
{
    int a = -5;
    cout<<abs(a)<<endl;
    float b = -1.23;
    cout<<abs(b)<<endl;
    return 0;
}



void func(int a)
{
    cout<<"void func(int a)"<<endl;
}
void func(float a)
{
  cout<<"void func(float a)"<<endl;
}
void func(char a)
{
  cout<<"void func(char a)"<<endl;
}

int main()
{
    int a = 1;
    func(a);
    float b = 1.2;
    func(b);
    char c = 'a';
    func(c);

    return 0;
}
#endif
