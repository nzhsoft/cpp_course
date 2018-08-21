#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int nu):name(n),num(nu){}
    void dis(int idx)
    {
       cout<<"idx "<<idx<<" name "<<name<<" number "<<num<<endl;
    }

private:
    string name;
    int num;
};

int main()
{
//    void (*pf)(int a) = foo;
    void (Student::*pdis)(int idx)  = &Student::dis;

    Student s("zhangsan",100);
    Student ss("zhangsan",100);

    Student *ps = &s;
    Student *pss = &ss;

//    pf(1);
    (s.*pdis)(1);
    (ss.*pdis)(2);

    (ps->*pdis)(3);
    (pss->*pdis)(4);


    return 0;
}
