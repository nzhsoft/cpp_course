#include <iostream>
using namespace std;

//一个对象所占的空间大小只取决于该对象中数据成员所占的空间，而与成员函数无关

//类的成员函数只有一份，在对象调用过程中，传入对象的地址，具体可以表现为this

class Time
{
public:
    Time(int h, int m, int s)
        :_hour(h),_minute(m),_sec(s){}
    void dis(Time * t)
    {
//        cout<<_hour<<_minute<<_sec<<endl;
//        cout<<this->_hour<<this->_minute<<this->_sec<<endl;
        cout<<t->_hour<<t->_minute<<t->_sec<<endl;
    }
private:
    int _hour;
    int _minute;
    int _sec;
};
int main()
{
    cout<<sizeof(Time)<<endl;  //12

    Time t1(1,2,3); t1.dis(&t1);
    Time t2(4,5,6); t2.dis(&t2);
    Time t3(7,8,9); t3.dis(&t3);

    return 0;
}

