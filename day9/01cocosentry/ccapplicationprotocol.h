#ifndef CCAPPLICATIONPROTOCOL_H
#define CCAPPLICATIONPROTOCOL_H


class CCApplicationProtocol
{
public:
    CCApplicationProtocol();

    virtual bool applicationDidFinishLaunching() = 0;
};

#endif // CCAPPLICATIONPROTOCOL_H
