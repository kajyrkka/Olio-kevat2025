#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include "secondclass.h"

class firstClass
{
public:
    firstClass();
    void useSecondCopy(secondClass S);
    void useSecondRef(secondClass & Ref);
    void useSecondComposition();

    secondClass obj;

};

#endif // FIRSTCLASS_H
