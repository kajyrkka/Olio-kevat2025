#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "baseclass.h"

class DerivedClass:public BaseClass
{
public:
    DerivedClass();
    ~DerivedClass();
    virtual void receiver() override;
    virtual void transmitter() override;
};

#endif // DERIVEDCLASS_H
