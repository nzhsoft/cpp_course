#ifndef APPDELEGATE_H
#define APPDELEGATE_H
#include "ccapplication.h"


class AppDelegate:private CCApplication
{
public:
    AppDelegate();

    virtual bool applicationDidFinishLaunching();
};

#endif // APPDELEGATE_H
