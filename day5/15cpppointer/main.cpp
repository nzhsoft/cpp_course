#include <iostream>
using namespace std;

//定义一个指针，指向类的成员，不是指向对象的成员

class Student
{
public:
    Student(string n, int nu):name(n),num(nu){}
private:
    string name;
    int num;
};

int main()
{
    Student s("zhangsi",100);
    Student *ps = &s;

    Student ss("zhaoqi",100);
    Student *pss = &ss;

//    string *psn = &s.name;  //此行为，破坏了封装

    //下面讲的指针，是指的类层面的指针，而不是对象层面的。

    //要想使用，还要跟具体的对象产生关系。

    string Student:: *psn  = &Student::name;
//    s.name ps->name
    cout<<s.*psn<<endl;
    cout<<ps->*psn<<endl;

    cout<<ss.*psn<<endl;
    cout<<pss->*psn<<endl;



    return 0;
}
