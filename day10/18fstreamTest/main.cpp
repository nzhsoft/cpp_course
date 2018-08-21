#include <iostream>
#include <fstream>
using namespace std;

class myfstream
{
public:
    myfstream(char *path,char *mode)
    {
        pf = fopen(path,mode);
        if(pf == nullptr)
            flag = false;
        flag = true;
    }
    bool operator !()
    {
        return !flag;
    }

}

private:
    FILE* pf;
    bool  flag;
};

int main()
{
    myfstream myfs("abc.txt","w+");
    if(!myfs)
        cout<<"abcdef"<<endl;
}

#if 0
int main(int argc, char *argv[])
{
    fstream fs("abc",ios::in|ios::out|ios::trunc);
    if(!fs)
        cout<<"open error"<<endl;
    fs.put('a');
    fs.put('b');
    fs.put('c');
    fs.put('d');
    fs.seekp(0,ios::beg);
    char ch;
    while(fs.get(ch),!fs.eof())
    {
        cout<<ch;
    }
    fs.close();
    return 0;
}
#endif
