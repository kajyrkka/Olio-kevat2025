#include "firstclass.h"

/*
 * Issues with this example:
 *
 * 1. Assosiation = one delivers a copy
 *    of secondClass to firstClass method
 *    or constructor. Thus firstClass
 *    can use secondClass methods. BUT
 *    the delivered second class is not
 *    deleted if one tries to delete it
 *    at firstclass. ONLY copy is deleted.
 *
 * 2. Aggegation = one delivers either a
 *    pointer or a reference of secondClass
 *    to firstClass. Now you could delete
 *    secondClass in firstClass. But you
 *    did not create secondClass at
 *    firstClass.
 *
 * 3. Composition (topic of next week).
 *    In this relationship firstClass
 *    creates and deletes secondClass
 *    Thus secondClass is part of
 *    firstClass.
 *
 *
 *
 * */

int main()
{
    firstClass object1;
    secondClass object2;
    secondClass & ref2 = object2;

    object1.useSecondCopy(object2);
    object1.useSecondRef(ref2);
    object1.useSecondComposition();
    return 0;
}
