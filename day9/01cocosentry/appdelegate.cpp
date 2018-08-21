#include "appdelegate.h"
#include <iostream>
using namespace std;

AppDelegate::AppDelegate()
{

}

bool AppDelegate::applicationDidFinishLaunching()
{
    cout<<"游戏真正的开始"<<endl;
    return true;
}
