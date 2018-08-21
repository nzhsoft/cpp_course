#include <iostream>
#include <math.h>

using namespace std;

//友元类， 实际工作中，程序员喜欢友元类。
//己知三点求面积     海伦公式

class Point
{
    friend class ManagePoint;
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

class ManagePoint
{
public:
    float getDistance(const Point& p1, const Point & p2);
    float getArea(const Point& p1, const Point & p2,const Point & p3);
};

float ManagePoint::getDistance(const Point& p1, const Point & p2)
{
    float dx = p1._x - p2._x;
    float dy = p1._y - p2._y;

    return sqrt(dx*dx+dy*dy);
}

float ManagePoint::getArea(const Point& p1, const Point & p2,const Point & p3)
{
    float da = getDistance(p1,p2);
    float db = getDistance(p2,p3);
    float dc = getDistance(p1,p3);
    float p = (da + db + dc)/2;

    return sqrt(p*(p-da)*(p-db)*(p-dc));
}



int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();
    Point p3(-100,900);

    ManagePoint mp;
    cout<<"dis:"<<mp.getDistance(p1,p2)<<endl;
    cout<<"area:"<<mp.getArea(p1,p2,p3)<<endl;

    return 0;
}
