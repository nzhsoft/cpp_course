#include <iostream>
#include <string.h>
using namespace std;

//shallow copy  如果对象中不含有堆上的空间(*),此时浅拷贝，可以满足需求。
//不需要自实现。
//如果对象中含有堆上的空间(*),此时浅拷贝不能满足需求，需要自实现。
//浅拷贝，重析构 即double free

//同类对象方法中，进行传参，可以访问其私有成员，其它则不可。


class DataStr
{
public:
    DataStr()
    {
        _str = new char[1024];
        strcpy(_str,"C++ is the best language in the world\n");
    }

    DataStr(const DataStr & another)
    {
        _str = new char[strlen(another._str)+1];
        strcpy(_str,another._str);
    }

    ~DataStr()
    {
        delete []_str;
    }
    void dis()
    {
        cout<<_str<<endl;
    }

private:
    char *_str;
};

int main()
{
    DataStr  ds;
    ds.dis();

    DataStr ds2(ds);
    ds2.dis();

    return 0;
}
