#include "firstclass.h"

firstClass::firstClass()
{

}

void firstClass::useSecondCopy(secondClass S)
{
    S.secondClassFunction();
}

void firstClass::useSecondRef(secondClass &Ref)
{
    Ref.secondClassFunction();
}

void firstClass::useSecondComposition()
{
    obj.secondClassFunction();
}
