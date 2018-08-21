#include <iostream>
#include <string>
#include "mystring.h"
using namespace std;

//本质，是对char *的包装

int main()
{
//    string s; string s1("china"); string s2(s1); string s3 = s2;
//    string s4; s4 = s3;
    string s  = "china";
    string s1 = "is great";
    if(s == s1)
        cout<<"=="<<endl;
    if(s >= s1)
        cout<<">"<<endl;
    if(s <= s1)
        cout<<"<"<<endl;
//    string s2 = s +s1;
//    cout<<s2<<endl;
//    (s += s1) = "abc";
//    cout<<s<<endl;

    cout<<s1.at(3)<<endl;
    cout<<s1[3]<<endl;
    cout<<s1.operator [](3)<<endl;

    cout<<s1.c_str()<<endl;  //string  char*




    cout<<"====================="<<endl;
    mystring ms  = "china";
    mystring ms1 = " is good place";
    if(ms == ms1)
        cout<<"=="<<endl;
    if(ms >= ms1)
        cout<<">"<<endl;
    if(ms < ms1)
        cout<<"<"<<endl;

//    mystring ms2 = ms + ms1;
//    ms2.dump();
//     (ms += ms1) = "abc";
//     ms.dump();
    cout<<ms1.at(2)<<endl;
    cout<<ms1[2]<<endl;
    cout<<ms1.operator [](3)<<endl;

    cout<<ms1.c_str()<<endl;

    return 0;
}

int main1()
{
    string s;            //空串""         1
    string s1("china");  //非空串"china" 5+1
    cout<<s<<endl;
    cout<<s1<<endl;

    string s3 = s1;
    cout<<s3<<endl;

    string s4;
    (s4 = s3) = s1;

    cout<<"+++++++++++++++++++++++++"<<endl;
    mystring ms;
    cout<<&ms<<endl;
    mystring ms1("china");
    cout<<&ms1<<endl;
    ms.dump();
    ms1.dump();

    mystring ms3 = ms1;
    cout<<&ms3<<endl;
    ms3.dump();

    return 0;
}
