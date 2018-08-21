#include <iostream>

using namespace std;


class A
{
public:
    A()
    {
//        _x = 100;
//        _y = 200;
        cout<<"A()"<<endl;
    }
    void xxxx()
    {
        cout<<_x<<_y<<endl;
    }

    ~A()
    {
        cout<<"~A()"<<endl;
    }

    void *operator new(size_t size)
    {
        cout<<"operator new"<<endl;
        cout<<size<<endl;

        void *p = malloc(size);
        ((A*)p)->_x = 100;
        ((A*)p)->_y = 200;
        cout<<p<<endl;
        return p;
    }

    void operator delete(void *p)
    {
        cout<<"operator delete"<<endl;
        cout<<p<<endl;
    }

    void *operator new[](size_t size)
    {
        cout<<"operator new[]"<<endl;
        cout<<size<<endl;

        void *p = malloc(size);
        cout<<p<<endl;
        return p;
    }
    void operator delete[](void * p)
    {
         cout<<"operator delete[]"<<endl;
         cout<<p<<endl;
         free(p);
    }

private:
    int _x;
    int _y;
};

int main()
{
//    A *pa = new A;
//    pa->xxxx();
//    delete pa;

    A *pa = new A[10];
    delete []pa;

    return 0;
}
