#include <iostream>

using namespace std;

class Furniture
{
public:
    void descript()
    {
        cout<<"_weight:"<<_weight<<endl;
        cout<<"_color :"<<_color<<endl;
    }

protected:
    float _weight;
    int   _color;
};


class Sofa:virtual public Furniture
{
public:
    Sofa(float w = 0,int c = 1)
    {
        _weight = w;
        _color  = c;
    }

    void sit()
    {
        cout<<"take a sit  have a rest"<<endl;
    }

};
class Bed:virtual public Furniture
{
public:
    Bed(float w = 0,int c = 1)
    {
        _weight = w;
        _color  = c;
    }
    void sleep()
    {
        cout<<"have a sleep  ......."<<endl;
    }
};

class SofaBed:public Sofa, public Bed
{
public:
    SofaBed(float w ,int c )
    {
        _weight = w;
        _color  = c;
    }

};


int main()
{
//    Sofa sf;
//    sf.sit();

//    Bed bd;
//    bd.sleep();

    SofaBed sb(1000,2);
    sb.sit();
    sb.sleep();
    sb.descript();


    return 0;
}
