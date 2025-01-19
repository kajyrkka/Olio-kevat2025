#include "derivedclass.h"

/*
 * Issues from this example:
 * 1. virtual and override keywords
 *    only in class definition. I.e
 *    *.h file.
 *
 * 2. Overwritten method can be called
 *    from BaseClass with BaseClass::
 *
 * 3. Overwriting base class functionality
 *    is polymorphism. There could be
 *    many communication mechanisms e.g.
 *    Bluetooth, WLAN, 5G etc and they
 *    all could share the same BaseClass
 *
 * 4. ChatGPT:"In summary, a virtual
 *    destructor is needed in C++ when
 *    a base class pointer or reference
 *    is used to delete an object that
 *    is actually an instance of a
 *    derived class. It's important to
 *    ensure that the resources of the
 *    derived class are properly cleaned
 *    up in order to avoid memory leaks
 *    or other resource management
 *    issues."
 *
 * */



int main()
{
    /*
    DerivedClass object;

    object.frequencyCorrection();
    object.syncronization();
    object.transmitter();
    object.receiver();
    object.BaseClass::receiver();
    object.BaseClass::transmitter();
    */


    BaseClass * pBaseClass;
    pBaseClass = new DerivedClass;

    delete pBaseClass;

    return 0;
}
