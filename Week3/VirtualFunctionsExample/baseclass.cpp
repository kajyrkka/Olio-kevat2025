#include "baseclass.h"

BaseClass::BaseClass()
{

    cout<<"BaseClass generic receiver-transmitter created"<<endl;
}

BaseClass::~BaseClass()
{
    cout<<"BaseClass destructor"<<endl;
}

void BaseClass::receiver()
{
   cout<< "Executing BaseClass generic receiver function"<<endl;
}

void BaseClass::transmitter()
{
    cout<< "Executing BaseClass generic transmitter function"<<endl;
}

void BaseClass::syncronization()
{
    cout<< "Executing BaseClass syncronization "<<endl;
}

void BaseClass::frequencyCorrection()
{
    cout<< "frequency correction can not be overwritten "<<endl;
}
