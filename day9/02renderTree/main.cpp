#include <iostream>
using namespace std;
#include <thread>
#include <unistd.h>


class RenderShape
{
public:
    virtual void show() = 0;
    bool init(int x, int y)
    {
        _x = x;
        _y = y;
        return true;
    }

    static RenderShapeList()
    {
        RenderShape *t = head;
        while(t)
        {
            t->show();
            t = t->next;
        }
    }

protected:
    int _x;
    int _y;
    static RenderShape * head;
           RenderShape * next;
};

RenderShape * RenderShape::head = nullptr;


class Rect:public RenderShape
{
public:
    static Rect * create(int x, int y, int w, int l)
    {
        Rect  *pRet = new Rect;
        if(pRet&&pRet->init(x, y, w, l))
        {
            pRet->autoRelease();
        }
        else
        {
            delete pRet;
            pRet = nullptr;
        }
    }

    bool init(int x, int y, int w, int l)
    {
        RenderShape::init(x,y);

        _w = w;
        _l = l;
        return true;
    }

    virtual void show()
    {
        cout<<"draw rect from "<<"("<<_x<<","<<_y<<")"
           <<"witdh "<<_w<<"length "<<_l<<endl;
    }

    void autoRelease()
    {
//        if(head == nullptr)
//        {
            this->next = head;
            head = this;
//        }
//        else
//        {
//            this->next = head;
//            head = this;
//        }
    }

protected:
    int _w;
    int _l;
};

class Circle:public RenderShape
{
public:
    static Circle * create(int x, int y, int r)
    {
        Circle  *pRet = new Circle;
        if(pRet&&pRet->init(x, y, r))
        {
            pRet->autoRelease();
        }
        else
        {
            delete pRet;
            pRet = nullptr;
        }
    }

    bool init(int x, int y, int r)
    {
        RenderShape::init(x,y);

        _r = r;
        return true;
    }
    void autoRelease()
    {
//        if(head == nullptr)
//        {
            this->next = head;
            head = this;
//        }
//        else
//        {
//            this->next = head;
//            head = this;
//        }
    }
    virtual void show()
    {
        cout<<"draw Cirle from "<<"("<<_x<<","<<_y<<")"
           <<"radius "<<_r<<endl;
    }

protected:
    int _r;
};

class Ellipse:public RenderShape
{
protected:
    int _l;
    int _s;
};

void threadTask()
{
    while(1)
    {
        cout<<"+++++++++++++++++++++++"<<endl;
        RenderShape::RenderShapeList();
        cout<<"-----------------------"<<endl;
        sleep(2);

    }
}

int main()
{
    Rect * pr;
    Circle *pc;

    thread t(threadTask);
    while(1)
    {
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                pr = Rect::create(1,2,3,4);
                break;
            case 2:
                pc = Circle::create(4,5,6);
                break;
        }

    }
    t.join();


    return 0;
}
