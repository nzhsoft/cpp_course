#include <iostream>
#include "technician.h"
#include "manager.h"
#include "salesman.h"
#include "salemanager.h"
#include <typeinfo>

using namespace std;


int main()
{
    Employee * empArr[] = {new Manager, new Technician,
                          new SalesMan,new SalesMan ,new SaleManager};

    Employee *emp;
    Manager *pm;
    for(int i=0; i<sizeof(empArr)/sizeof(*empArr);i++)
    {
        emp = empArr[i];
        emp->init();
        if(typeid(*emp) == typeid(Manager))
        {
            cout<<"他提出要涨工资"<<endl;
            if(pm = dynamic_cast<Manager*>(emp))
            {
                pm->addSalary(2000);
            }
        }

        emp->promote();
        emp->calcSalary();
        emp->disInfor();
    }


}



#if 0

int main()
{
//    Technician  tech;
//    tech.promote();
//    tech.calcSalary();
//    tech.disInfor();

//    Manager  man;
//    man.promote();
//    man.calcSalary();
//    man.disInfor();

//    SalesMan  sman;
//    sman.promote();
//    sman.calcSalary();
//    sman.disInfor();

//    SaleManager  sm;
//    sm.init();
//    sm.promote();
//    sm.calcSalary();
//    sm.disInfor();


    Employee * empArr[] = {new Manager, new Technician,
                          new SalesMan,new SalesMan ,new SaleManager};

    for(auto emp:empArr)
    {
        emp->init();

        emp->promote();
        emp->calcSalary();
        emp->disInfor();
    }



    return 0;
}

#endif
