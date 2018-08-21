#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//对象的创建，初始化，挂到树上去

class CCSprite
{
public:
    CCSprite(){}
    static CCSprite* create()
    {
        CCSprite * pRet = new CCSprite;
        if(pRet && pRet->init()){
            pRet->autoRealease();
            return pRet;
        }
        else {
            delete pRet;
            pRet = nullptr;
            exit(-1);
        }
    }

    bool init()
    {
        cout<<"initial"<<endl;
        ch = rand()%(127-32) +33;
        return true;
    }

    static void renderTree()
    {
        CCSprite * t = head;
        while(t)
        {
            cout<<t->ch<<endl;
            t = t->next;
        }
    }

    void autoRealease()
    {
//        if(head == nullptr)
//        {

            this->next = head;
            head = this;
//        }
//        else
//        {
//            this->next = head;
//            head = this;
//        }
    }

private:
    static CCSprite *head;
    CCSprite * next;
    char ch;
};

CCSprite * CCSprite::head = nullptr;

int main()
{
    srand(time(NULL));
    CCSprite *ps  = CCSprite::create();
    CCSprite *ps2 = CCSprite::create();
    CCSprite *ps3 = CCSprite::create();
    CCSprite *ps4 = CCSprite::create();

    CCSprite::renderTree();




    return 0;
}
