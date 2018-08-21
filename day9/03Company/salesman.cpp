#include "salesman.h"

SalesMan::SalesMan()
{
}
void SalesMan::init()
{
    _rate= 0.04;
    _num = _startNumber++;
    _level = 1;
    cout<<"请输销售员的姓名：";
    cin>>_name;
    cout<<"请输入本月销售额: ";
    cin>>_saleAmount;
}

void SalesMan::promote()
{
    _level += 1;
}

void SalesMan::calcSalary()
{
    _salary = _saleAmount * _rate;
}

void SalesMan::disInfor()
{
    cout<<"姓名          :"<<_name<<endl;
    cout<<"工号          :"<<_num<<endl;
    cout<<"级别          :"<<_level<<endl;
    cout<<"本月的销售额度:"<<_saleAmount<<endl;
    cout<<"本月的提成比率:"<<_rate<<endl;
    cout<<"本月结算的薪水:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
