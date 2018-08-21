#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"


class Manager: virtual public Employee
{
public:
    Manager();
    virtual ~ Manager(){}
    virtual void init() ;
    virtual void promote()   ;
    virtual void calcSalary();
    virtual void disInfor()  ;

    void addSalary(float money);

protected:
    int _fixedSalary;
};

#endif // MANAGER_H
