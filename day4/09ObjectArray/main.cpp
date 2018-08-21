#include <iostream>
using namespace std;

class Stu
{
public:
    Stu(){}
    Stu(string n):_name(n){}
    void init(string name)
    {
        _name = name;
    }

    void dis()
    {
        cout<<_name<<endl;
    }
private:
    string _name;
};

//对象数组中，有100对象，就会发生100次构造


int main()
{
//    Stu s("zhansi");
//    Stu sa[100] = {Stu("liwu"),Stu("zhaoqi")};

//    Stu *ps = new Stu("abc");
//    Stu *ps = new Stu[2]{Stu("abc"),Stu("xxx")};
    Stu *ps = new Stu[100];

    for(int i=0; i<100; ++i)
    {
        ps[i].init("");
    }
    return 0;
}
