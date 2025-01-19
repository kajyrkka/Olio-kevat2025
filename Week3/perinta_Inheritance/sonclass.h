#ifndef SONCLASS_H
#define SONCLASS_H
#include <iostream>
using namespace std;
//#include "fatherclass.h"

//class SonClass:public FatherClass
//class SonClass:protected FatherClass
class SonClass //:public FatherClass
{
public:
    SonClass();
    ~SonClass();
    void showSonData();

private:
    string education;
    void setEducation(string);

};

#endif // SONCLASS_H
