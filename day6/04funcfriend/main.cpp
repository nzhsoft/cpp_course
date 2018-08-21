#include <iostream>
#include <math.h>

using namespace std;

//计算两点的距离
//前向声明的问题 前向声明，是一种不完全类型的声明，不能定义对象。
//可以定义指针和引用 作参数和返回值，仅用在函数声明中。

class Point;

class ManagePoint
{
public:
    float getDistance(const Point* p1, const Point * p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point* p1, const Point * p2);
public:
    Point(int x = 0,int y =0)
        :_x(x),_y(y){}
    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }


private:
    float _x;
    float _y;

};

float ManagePoint::getDistance(const Point *p1, const Point *p2)
{
    float dx = p1->_x - p2->_x;
    float dy = p1->_y - p2->_y;

    return sqrt(dx*dx+dy*dy);
}



int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();

    ManagePoint mp;

    cout<<"dis:"<<mp.getDistance(&p1,&p2)<<endl;

    return 0;
}


#if 0
#include <iostream>
#include <math.h>

using namespace std;

//计算两点的距离
//前向声明的问题 前向声明，是一种不完全类型的声明，不能定义对象。
//可以定义指针和引用 作参数和返回值，仅用在函数声明中。

class Point;




class ManagePoint
{
public:
    float getDistance(const Point& p1, const Point & p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point& p1, const Point & p2);
public:
    Point(int x = 0,int y =0)
        :_x(x),_y(y){}
    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }


private:
    float _x;
    float _y;

};

float ManagePoint::getDistance(const Point& p1, const Point & p2)
{
    float dx = p1._x - p2._x;
    float dy = p1._y - p2._y;

    return sqrt(dx*dx+dy*dy);
}



int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();

    ManagePoint mp;

    cout<<"dis:"<<mp.getDistance(p1,p2)<<endl;

    return 0;
}

#endif
