#include <iostream>
#include <fstream>
using namespace std;


//0000 0001
//0000 0010
//0000 0100

namespace IOS
{
    enum
    {
        in,out,trunc
    };
}

int main()
{
    fstream fs;
    fs.open("abc.txt",ios::in|ios::out|ios::trunc);
    if(!fs)
        cout<<"open error"<<endl;

    fs<<"aaaaaaaaaa"<<endl;
    fs<<"bbbbbbbbbb"<<endl;
    fs<<"cccccccccc"<<endl;

    fs.seekg(0,ios::beg);
    char buf[1024];
    while(fs>>buf)
    {
        cout<<buf<<endl;
    }
//    while(fs.getline(buf,1024))
//    {
//        cout<<buf<<endl;
//    }


    fs.close();

}

int main2()
{
    fstream fs;
    fs.open("abc.txt",ios::in|ios::out|ios::trunc);
    if(!fs)
        cout<<"open error"<<endl;


    for(char i='a'; i<'z'; i++)
       fs<<i;

    fs.seekg(0,ios::beg);

    char  ch;
    while(fs>>ch)
    {
        cout<<ch<<endl;
    }
    fs.close();
}

int main1()
{
    fstream fs;
    fs.open("abc.txt",ios::in|ios::out|ios::trunc);
    if(!fs)
        cout<<"open error"<<endl;


    for(char i='a'; i<'z'; i++)
        fs.put(i);

    fs.seekg(0,ios::beg);

    char  ch;
    while(fs.get(ch))
    {
        cout<<ch<<endl;
    }

    fs.close();
    return 0;
}
