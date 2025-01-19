#ifndef FATHERCLASS_H
#define FATHERCLASS_H
#include <iostream>

#include "sonclass.h"


using namespace std;


class FatherClass
{
public:
    FatherClass();
    ~FatherClass();
    void showFamilyInfo();
    SonClass poika;


protected:
    string skill;
    string getSkill();


private:
    string familyName;
    void setSkill(string);

};

#endif // FATHERCLASS_H
