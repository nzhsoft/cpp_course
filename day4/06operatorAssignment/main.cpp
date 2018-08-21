#include <iostream>

using namespace std;

//系统提供默认的赋值运算符重载，也是一种浅赋值行为
//如果对象中，不存在由*构成的堆空间，此时默认也是可以满足需求的。
//格式比较固定 A& operator=(const A& another)  自实现，默认即不存在

//如果对象中，存在由*构成的堆空间

struct Date
{
public:
    Date(int y = 2016,int m =6 ,int d = 6)
        :year(y),month(m),day(d){}

    Date& operator=(const Date& another)
    {
        this->year = another.year;
        this->month = another.month;
        this->day = another.day;
        return *this;
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
    Date d(2018,8,8);
    d.dis();

    Date d2(2019,9,9);
    d2 = d;
    d2.dis();

    Date  d3;  //d3 = d3  a = a

    d3 = d2 = d;
    d3.operator =(d2.operator =(d));
    return 0;
}
