#include <iostream>
using namespace std;


//strlen strcat strcmp strcpy

int main()
{
    string s  = "Great Wall";
    cout<<s.size()<<endl;
//    string s1 = " in China";
//    s += s1;
//    cout<<s<<endl;

    string  s3 = "Great Wall";

    if(s == s3)
        cout<<" == "<<endl;
    else
        cout<<" !="<<endl;


    string s4;
    s4 = s3;

    cout<<s4<<endl;


    return 0;
}


int main2()
{
    string s("china");
    cout<<sizeof(string)<<endl;   //4
    cout<<sizeof(s)<<endl;
    string s1 = "china";
    cout<<s1<<endl;
    s1 = "america";
    cout<<s1<<endl;

//    cin>>s;
//    cout<<s<<endl;
    getline(cin,s);
    cout<<s<<endl;
    return 0;
}




int main1()
{
    int a = 100;
    int *pa = &a;
    cout<<pa<<endl;
    cout<<*pa<<endl;

//    string s = "china";
    string *ps = new string("china");
    cout<<ps<<endl;
    cout<<*ps<<endl;

    return 0;
}
