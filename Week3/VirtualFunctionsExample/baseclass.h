#ifndef BASECLASS_H
#define BASECLASS_H
#include <iostream>
using namespace std;


class BaseClass
{
public:
    BaseClass();
    virtual ~BaseClass();
    //~BaseClass();
    virtual void receiver();
    virtual void transmitter();
    virtual void syncronization();
    void frequencyCorrection();

};

#endif // BASECLASS_H
