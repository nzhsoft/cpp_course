#include <iostream>
using namespace std;


//老师   姓名   性别   年龄    教课    吃饭    睡觉
//学生   姓名   性别   年龄    学习    吃饭    睡觉


//人类                                  吃饭                          父类           基类
//                                                                   继承关系       派生关系

//              老师           教课               学习     学生        子类           派生类

class Human                   //共性
{
public:
    void eat(string food)
    {
        cout<<food<<endl;
    }
};

class Teacher: public Human     //个性
{
public:
    void teach(string course)
    {
        cout<<"i am a teacher i am teaching "<<course<<endl;
    }
};

class Student:private Human
{
public:
    void study(string course)
    {
        cout<<"i am student  i am learing "<<course<<endl;
    }
};

class Worker:public Human
{

};

int main()
{
    Teacher t;
    t.teach("C++");
    t.eat("红烧牛肉面");

    Student s;
    s.study("C++");
    s.eat("老坛酸菜牛牛面");
    return 0;
}
