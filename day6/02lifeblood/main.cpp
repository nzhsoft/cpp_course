#include <iostream>

//friend 友元，效率的问题
//get 方法和set方法，是标准封装的结果。friend 破坏了这种封装，但又带来效率的提高。

using namespace std;

class Sprite
{
    friend void fight(Sprite & sp);
public:
    Sprite(int lb = 100):_lifeBlood(lb){}
    int getLifeblood()
    {
        return _lifeBlood;
    }

    void setLifeblood(int lb)
    {
        _lifeBlood = lb;
    }


private:
    int _lifeBlood;
};

void fight(Sprite & sp)
{
//    sp.setLifeblood(sp.getLifeblood() -20);
//    cout<<sp.getLifeblood()<<endl;
    sp._lifeBlood = sp._lifeBlood -20;
    cout<<sp._lifeBlood<<endl;
}


int main()
{
    Sprite sp;
    fight(sp);
    return 0;
}
