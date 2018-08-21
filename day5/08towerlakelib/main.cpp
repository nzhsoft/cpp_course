#include <iostream>
using namespace std;


class University
{
public:
    University(string t,string l)
    {
        _tower =t;
        _lake = l;
    }
    static  string& getLib()
    {
        return _lib;
    }


    void dis()
    {
        cout<<"塔:"<<_tower<<"湖："<<_lake<<"图:"<<_lib<<endl;
    }
private:
    string _tower;
    string _lake;
    static string _lib;

};

string University::_lib = "";

int main()
{
    University pk("博雅塔","未名湖");
    University bs("电视塔","大明湖");
    University xdf("雷峰塔","西湖");
    University::getLib() += "九阴真经";
    pk.dis();
    University::getLib() += " 中国挖掘机从入门到放弃";
    bs.dis();
    University::getLib() += " 要出国，找我学英语";
    xdf.dis();

    return 0;
}
