#include <iostream>
#include <fstream>

using namespace std;

struct Student
{
    char name[100];
    int num;
    int age;
    char sex;
};

int main()
{
    fstream fs;
    fs.open("abc.txt",ios::in|ios::out|ios::trunc|ios::binary);
    if(!fs)
        cout<<"open error"<<endl;

     Student s[3] = {
         {"li",1001,18,'f'},
         {"Fun",1002,19,'m'},
         {"Wang",1004,17,'f'}
     };

     fs.write((char*)&s,sizeof(s));

     fs.seekg(0,ios::beg);


     Student ss;

     while(fs.read((char*)&ss,sizeof(ss)))
     {
         cout<<"Name "<<ss.name<<endl;
         cout<<"Num "<<ss.num<<endl;
         cout<<"Age "<<ss.age<<endl;
         cout<<"Sex "<<ss.sex<<endl;
         cout<<"---------------"<<endl;
     }

     fs.close();


    return 0;
}
