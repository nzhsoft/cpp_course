#include <iostream>
using namespace std;

struct Complex
{
    float real;
    float image;
};

Complex  operator+(Complex one,Complex another)
{
    Complex sum;
    sum.real = one.real + another.real;
    sum.image = one.image +another.image;
    return sum;
}

typedef struct _pos
{
    int x_;
    int y_;
}Pos;

bool operator==(Pos one ,Pos another)
{
    if(one.x_ == another.x_ && one.y_ == another.y_)
        return true;
    else
        return false;
}

//bool isEqual(Pos one ,Pos another)
//{
//    if(one.x_ == another.x_ && one.y_ == another.y_)
//        return true;
//    else
//        return false;
//}


int main()
{
    Complex  com1 = {1,2},com2 = {3,4};

    Complex sum = operator+(com2,com1);

    cout<<"("<<sum.real<<","<<sum.image<<")"<<endl;


//    Pos  ps = {1,2};
//    Pos  fdPs = {1,2};
//    if (ps == fdPs)
//        cout<<"=="<<endl;
//    else
//        cout<<"!="<<endl;
    return 0;
}
