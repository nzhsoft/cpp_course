#include <iostream>

using namespace std;


class Birthday
{
public:
    Birthday(int y=0, int m=0, int d=0)
        :_year(y),_month(m),_day(d){}
    void disBirth()
    {
        cout<<"year"<<_year<<endl;
        cout<<"month"<<_month<<endl;
        cout<<"day"<<_day<<endl;
    }

private:
    int _year;
    int _month;
    int _day;
};

class Student
{
public:
    Student(string sn , char cs ,float fs)
        :_name(sn),_sex(cs),_score(fs){}
    void dis()
    {
        cout<<"name :"<<_name<<endl;
        cout<<"sex  :"<<_sex<<endl;
        cout<<"score:"<<_score<<endl;
    }

private:
    string _name;
    char _sex;
    float _score;
};

class Graduate:public Student
{
public:
    Graduate(string sn, char cs,float fs,float fsa,int y,int m,int d)
        :Student(sn,cs,fs),birth(y,m,d)
    {
        _salary = fsa;
    }
    void dump()
    {
        dis();
        birth.disBirth();
        cout<<"salary:"<<_salary<<endl;
    }

private:
    float _salary;
    Birthday birth;

};

int main()
{
    Graduate  g("zhangsan",'s',99,1000,1989,9,9);
    g.dump();
    return 0;
}
