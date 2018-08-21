#ifndef SALESMAN_H
#define SALESMAN_H
#include "employee.h"

class SalesMan: virtual public Employee
{
public:
    SalesMan();
    virtual ~SalesMan(){}
    virtual void init() ;
    virtual void promote()    ;
    virtual void calcSalary() ;
    virtual void disInfor()   ;

protected:
    float _saleAmount;
    float _rate;
};

#endif // SALESMAN_H
