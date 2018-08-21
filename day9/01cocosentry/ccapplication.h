#ifndef CCAPPLICATION_H
#define CCAPPLICATION_H
#include "ccapplicationprotocol.h"


class CCApplication:public CCApplicationProtocol
{
public:
    CCApplication();

    int run();

    static CCApplication * sharedApplication();
private:
    static CCApplication * sm_pSharedApplication;
};

#endif // CCAPPLICATION_H
