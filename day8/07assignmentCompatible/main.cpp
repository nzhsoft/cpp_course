#include <iostream>
#include <typeinfo>

using namespace std;

//shadow

//1 派生类的对象可以赋值给基类对象。
//2 派生类的对象可以初始化基类的引用。
//3 派生类对象的地址可以赋给指向基类的指针。

class Shape
{
public:
    Shape(int x =0 , int y = 0)
        :_x(x),_y(y){

        cout<<"Shape=>"<<this<<endl;
        cout<<typeid(this).name()<<endl;
    }


    void draw()
    {
        cout<<"draw shape from "<<"("<<_x<<","<<_y<<")"<<endl;
    }

protected:
    int _x;
    int _y;
};

class Circle:public Shape
{
public:
    Circle(int x=0, int y=0, int r=0)
        :Shape(x,y),_radius(r){

        cout<<"Shape=>"<<this<<endl;
        cout<<typeid(this).name()<<endl;
    }

    void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }

protected:
    int _radius;
};

class Rect:public Shape
{

};



int main()
{
//    Shape s(1,2);
//    s.draw();

    Circle c(4,5,6);
//    c.draw();

//    s = c;
//    s.draw();

//    Shape & rs = c;
//    rs.draw();

    Shape * ps = &c;
    ps->draw();


//    double a;
//    char *p = &a;
//    char a;
//    double *pd = &a;
//    *pd = 100;


    return 0;
}
