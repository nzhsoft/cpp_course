#include <iostream>

using namespace std;



//Mother 依赖于 book   依赖->耦合   -->低耦合

class IReader
{
public:
    virtual string  getContents() = 0;
};


class Book:public IReader
{
public:
    string getContents()
    {
        return "从前有座山，山里有座庙，庙里有个小和尚，"
               "听老和尚讲故事，从前有座山";
    }
};

class EBook:public IReader
{
public:
    string getContents()
    {
        return "郭文贵， 在美国 瞎bb";
    }
};

class NewsPaper:public IReader
{
public:
    string getContents()
    {
        return "Trump 要在黑西哥边境建一座墙";
    }
};



class Mother
{
public:
    void tellStory(IReader *pi)
    {
        cout<<pi->getContents()<<endl;
    }
};

int main()
{
    Mother m;
    Book b;
    NewsPaper n;
    EBook  eb;
    m.tellStory(&b);
    m.tellStory(&n);
    m.tellStory(&eb);
    return 0;
}
