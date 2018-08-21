#include <iostream>

using namespace std;



class Birthday
{
public:
    Birthday(int y, int m, int d)
        :_year(y),_month(m),_day(d){}
    void disBirth()
    {
        cout<<"year"<<_year<<endl;
        cout<<"month"<<_month<<endl;
        cout<<"day"<<_day<<endl;
    }
    Birthday(const Birthday & another)
    {
        this->_year = another._year;
        this->_month = another._month;
        this->_day = another._day;
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
    Student(const Student & another)
    {
        this->_name = another._name;
        this->_sex = another._sex;
        this->_score = another._score;
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
    Graduate(const Graduate & another)
        :Student(another),birth(another.birth)
    {
        this->_salary = another._salary;
    }

    void dump()
    {
        dis();
        birth.disBirth();
        cout<<"salary:"<<_salary<<endl;
    }

    Graduate & operator=(const Graduate & another)
    {
        if(this == &another)
            return *this;

        Student::operator=(another);
        birth = another.birth;
        this->_salary = another._salary;
        return *this;
    }

private:
    float _salary;
    Birthday  birth;
};

int main()
{
    Graduate g("zhaoqi",'s',99,1000,1999,9,9);
    g.dump();
    cout<<"=================="<<endl;
    Graduate gg("xxx",'x',9,9999,1888,8,8);
    g = gg;
    g.dump();
    return 0;
}
