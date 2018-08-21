#include "salemanager.h"

SaleManager::SaleManager()
{

}

void SaleManager::init()
{
    _fixedSalary = 5000;
    _num = _startNumber++;
    _level = 1;
    _rate= 0.05;
    cout<<"请输入销售经理的姓名：";
    cin>>_name;
    cout<<"请输入本月销售额: ";
    cin>>_saleAmount;
}

void SaleManager::promote()
{
    _level += 3;
}

void SaleManager::calcSalary()
{
    _salary = _fixedSalary + _saleAmount *_rate;
}

void SaleManager::disInfor()
{
    cout<<"姓名          :"<<_name<<endl;
    cout<<"工号          :"<<_num<<endl;
    cout<<"级别          :"<<_level<<endl;
    cout<<"本月固定的薪水:"<<_fixedSalary<<endl;
    cout<<"每个的销售额度:"<<_saleAmount<<endl;
    cout<<"本月的提成比率:"<<_rate<<endl;
    cout<<"本月的结算薪水:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
