#include <iostream>
using namespace std;

//内存管理层次分明,只能本层的内存负责

class Birthday
{
public:
    Birthday()
    {
        cout<<"Birthday()"<<endl;
        year = new int(1999);
        month = new int(9);
        day =   new int(9);
    }
    ~Birthday()
    {
        cout<<"~Birthday()"<<endl;
        delete year;
        delete month;
        delete day;
    }

private:
    int *year;
    int *month;
    int *day;
};


class Stu
{
public:
    Stu()
    {
        cout<<" Stu()"<<endl;
        name = new char[1023];
        age = 18;
        birth = new Birthday;
    }
    ~Stu()
    {
        cout<<" ~Stu()"<<endl;
        delete []name;
        delete birth;
    }

private:
    char *name;
    int age;
    Birthday *birth;
};

int main()
{
//    Stu  s;
    Stu *ps = new Stu;
    delete ps;
    return 0;
}
