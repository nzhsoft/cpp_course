#include <iostream>
using namespace std;

//析构器是不是必须的
//析构器,在什么时调用,自动调用


//1 与类名同 无参 无返回 前面加一个~
//2 在对象被销毁前,自动调用,被调用用于处理清理工作
//3 在对象被销毁前,栈上对象,堆上的对象

//4 系统提供一个空体析构器

struct Date
{
public:
    Date(int y = 0,int m = 0, int d = 0)
        :year(y),month(m),day(d)
    {}

private:
    int year;
    int month;
    int day;
};

int main()
{
    {
        Date d;
    }
    cout<<"yyyyyyyyy"<<endl;

    Date *pd = new Date;
    delete pd;



    return 0;
}
