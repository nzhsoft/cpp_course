#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//转化构造函数的本质，也是构造函数


//class mysring
//{
//public:
//    mystring(const char * s = nullptr);  //char *  mystring
//    mystring(const mystring & another);
//};

//explicit 用于修饰构造函数


class Point2D
{
    friend class Point3D;
public:
    Point2D(int x=0, int y=0 )
        :_x(x),_y(y){}
private:
    int _x;
    int _y;
};

class Point3D
{
public:
    explicit Point3D(int x=0, int y=0 ,int z=0)
        :_x(x),_y(y),_z(z){}

//    Point3D(const Point3D & d3);

    explicit Point3D(const Point2D & d2)  //Point2D  ->Point3D      implicit
    {
        this->_x = d2._x;
        this->_y = d2._y;
        this->_z = rand()%100;
    }

    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<","<<_z<<")"<<endl;
    }

private:
    int _x;
    int _y;
    int _z;
};




Point3D convert(Point2D& d2)
{
    return Point3D(d2);
}

int main()
{
    Point3D p3;
    p3.dumpFormat();
    Point3D *p = new Point3D;
    p->dumpFormat();

    return 0;
}

int main1()
{
    srand(time(NULL));

    Point2D  d2(10,100);
    Point3D  d3 = static_cast<Point3D>(d2);
//    d3 = convert(d2);

    d3.dumpFormat();

    return 0;
}
