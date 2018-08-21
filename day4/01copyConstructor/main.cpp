#include <iostream>
using namespace std;

//由普通数值，作参数完成构造，constructor
//由同类对象，作参数完成构造，copy constructor

//shallow copy  如果对象中不含有堆上的空间(*),此时浅拷贝，可以满足需求。
//不需要自实现。
//如果对象中含有堆上的空间(*),此时浅拷贝不能满足需求，需要自实现。
//浅拷贝，重析构 即double free

//copy constructor
//1 系统提供了默认的拷贝构造器，格式，比较固定,一经实现，不复存在。
//2 此拷贝构造器，不是空的。提供了一个等位拷贝机制。
//3 系统提供的默认拷贝构造器，是一种浅拷贝，shallow copy
//4 deep copy

struct Date
{
public:
    Date(int y = 2016,int m =6 ,int d = 6)
        :year(y),month(m),day(d){}

    Date(const Date &another)
    {
        year  = another.year;
        month = another.month;
        day   = another.day;
    }

    void dis()
    {
        cout<<"year:"<<year
            <<"month"<<month
            <<"day"<<day<<endl;
    }

private:
    int year;
    int month;
    int day;
};


int main()
{
    int a = 0; //初始化
    a = 5;     //赋值
    int b = a;


    Date  d(2016,8,8);
    d.dis();

    Date dd(d);
    dd.dis();

    cout<<sizeof(d)<<sizeof(dd)<<endl;



    return 0;
}
