#include <iostream>
using namespace std;

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
    Graduate(string sn, char cs,float fs,float fsa)
        :Student(sn,cs,fs)
    {
        _salary = fsa;
    }
    void dump()
    {
        dis();
        cout<<"salary:"<<_salary<<endl;
    }

private:
    float _salary;
};

class Doctor:public Graduate
{
public:
    Doctor(string sn, char cs,float fs,float fsa,string st)
        :Graduate(sn, cs,fs,fsa)
    {
        _title = st;
    }
    void disDump()
    {
        dump();
        cout<<"title:"<<_title<<endl;
    }

private:
    string _title;
};

int main()
{
    Doctor  d("zhao si",'s',99,3000,"doctor zhao");
    d.disDump();
    return 0;
}
