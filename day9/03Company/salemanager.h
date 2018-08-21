#ifndef SALEMANAGER_H
#define SALEMANAGER_H
#include "manager.h"
#include "salesman.h"


class SaleManager:public  Manager,public SalesMan
{
public:
    SaleManager();
    virtual ~SaleManager(){}
    virtual void init() ;

    virtual void promote()    ;
    virtual void calcSalary() ;
    virtual void disInfor()   ;

};

#endif // SALEMANAGER_H
