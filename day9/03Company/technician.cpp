#include "technician.h"

Technician::Technician()
{
}

void Technician::init()
{
    _num = _startNumber++;
    _level = 1;
    _moneyPerHour = 100;
    cout<<"请输入技术人员的姓名：";
    cin>>_name;
    cout<<"请输入本月工作的小时数:";
    cin>>_amountHour;
}

void Technician::promote()
{
    _level += 3;
}

void Technician::calcSalary()
{
    _salary = _amountHour * _moneyPerHour;
}

void Technician::disInfor()
{
    cout<<"姓名          :"<<_name<<endl;
    cout<<"工号          :"<<_num<<endl;
    cout<<"级别          :"<<_level<<endl;
    cout<<"本月工作的小时数:"<<_amountHour<<endl;
    cout<<"每个工作时的薪水:"<<_moneyPerHour<<endl;
    cout<<"本月的结算的薪水:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
