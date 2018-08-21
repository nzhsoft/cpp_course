#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



class Point3D
{
public:
    Point3D(int x=0, int y=0 ,int z=0)
        :_x(x),_y(y),_z(z){}

    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<","<<_z<<")"<<endl;
    }

private:
    int _x;
    int _y;
    int _z;
};

class Point2D
{
public:
    Point2D(int x=0, int y=0 )
        :_x(x),_y(y){}

    operator Point3D()
    {
        return Point3D(this->_x,this->_y,rand()%100);
    }

private:
    int _x;
    int _y;
};


int main()
{
    srand(time(NULL));

    Point2D  d2(1,2);
    Point3D  d3;

    d3 = d2;

    d3.dumpFormat();


    return 0;
}
