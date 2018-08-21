#include "manager.h"

Manager::Manager()
{

}
void Manager::init()
{
    _fixedSalary = 8000;
    _num = _startNumber++;
    _level = 1;
    cout<<"请输入经理的姓名：";
    cin>>_name;
    _salary = 0;
}

void Manager::promote()
{
    _level += 4;
}

void Manager::calcSalary()
{
    _salary += _fixedSalary;
}

void Manager::disInfor()
{
    cout<<"姓名          :"<<_name<<endl;
    cout<<"工号          :"<<_num<<endl;
    cout<<"级别          :"<<_level<<endl;
    cout<<"本月的结算的薪水:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}

void Manager::addSalary(float money)
{
    _salary += money;
}
