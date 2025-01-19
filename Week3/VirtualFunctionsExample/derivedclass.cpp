#include "derivedclass.h"

DerivedClass::DerivedClass()
{
    cout<<"DerivedClass created.."<<endl;
}

DerivedClass::~DerivedClass()
{
    cout<<"DerivedClass deleted.."<<endl;
}

void DerivedClass::receiver()
{
    cout<< "Executing DerivedClass receiver function"<<endl;
}

void DerivedClass::transmitter()
{
    cout<< "Executing DerivedClass trasmitter function"<<endl;
}
