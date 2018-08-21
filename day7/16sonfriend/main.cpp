#include <iostream>

using namespace std;

class Student
{
    friend ostream &operator<<(ostream & out, Student & stu);
public:
    Student(int i,int j)
        :a(i),b(j){}
private:
    int a;
    int b;
};

ostream &operator<<(ostream & out, Student & stu)
{
    out<<stu.a<<endl;
    out<<stu.b<<endl;
}

class Graduate:public Student
{
    friend ostream &operator<<(ostream & out, Graduate & gra)
    {
        cout<<(Student&)gra;
        cout<<gra.c<<endl;
    }
public:
    Graduate(int i,int j,int k)
        :Student(i,j),c(k){}
private:
    int c;
};

int main()
{
    Graduate  g(1,2,3);
    cout<<g<<endl;
    return 0;
}
