#include <iostream>
using namespace std;


//cin>>ch  while(cin)

//  int get();
//? istream& get (char& c);
//? istream& get (char* s, streamsize n);  //ÖÕÖ¹·ûÎª'\n'
//? istream& get (char* s, streamsize n, char delim);

//istream& getline (char* s, streamsize n );
//istream& getline (char* s, streamsize n, char delim );



int main4()
{
    char buf[1024];
//    cin>>buf;
    cin.getline(buf,1024);
    cout<<buf<<endl;
}

#if 0
int main()
{
    char buf[1024];
    while(cin.getline(buf,20))
    {
        cout<<buf<<endl;

    }
    cout<< "\n cin.eof(): " <<cin.eof()
        << "\n cin.fail(): " <<cin.fail()
        << "\n cin.bad(): " <<cin.bad()
        << "\n cin.good(): " <<cin.good()<<endl;
}


int main()
{
    char buf[1024];
    while(cin.get(buf,20,'x'))
    {
        cout<<buf<<endl;
    }
    cout<< "\n cin.eof(): " <<cin.eof()
        << "\n cin.fail(): " <<cin.fail()
        << "\n cin.bad(): " <<cin.bad()
        << "\n cin.good(): " <<cin.good()<<endl;

}

int main1()
{
    char ch;
    while(cin.get(ch))
    {
        cout<<ch<<endl;
    }
    return 0;
}
#endif
