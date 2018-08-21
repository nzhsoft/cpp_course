#include <iostream>

using namespace std;

//多态形成的条件有3个
//1 父类中有虚函数。  加 virtual  声明型关键字
//2 子类override覆写了父类的虚函数。 子类中同名，同参，同返回，才能构成覆写
//3 子类对象赋给父类的指针，通过父类的指针，调用虚函数，形成多态。

class Shape
{
public:
    Shape(int x =0 , int y = 0)
        :_x(x),_y(y){
    }

    virtual void draw()
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

    }
    virtual void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }

protected:
    int _radius;
};

class Rect:public Shape
{
public:
    Rect(int x = 0, int y = 0 , int w = 0 ,int l = 0)
        :Shape(x,y),_width(w),_lenth(l){}

    virtual void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"
          <<"_width"<<_width<<"lenth"<<_lenth<<endl;
    }

protected:
    int _width;
    int _lenth;
};

int main()
{
    Circle c(3,4,5);
//    Shape *ps = &c;
//    ps->draw();

    Rect r(7,8,9,10);
//    ps = &r;
//    ps->draw();

    Shape *ps;

    while(1)
    {
        int choice;
        cin>>choice;
        switch (choice) {
            case 1:
                ps = &c;
                break;
            case 2:
                ps = &r;
                break;
        }
        ps->draw();
    }
    return 0;
}
