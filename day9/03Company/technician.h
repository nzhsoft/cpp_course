#ifndef TECHNICIAN_H
#define TECHNICIAN_H
#include "employee.h"

class Technician:public Employee
{
public:
    Technician();
    virtual ~Technician(){}
    virtual void init() ;
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfor();

protected:
    int _amountHour;
    int _moneyPerHour;
};

#endif // TECHNICIAN_H
