#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "baseclass.h"

class DerivedClass: public BaseClass
{
public:
  DerivedClass(float,float);
  //laskee suorakaiteen sisalla olevan ympyran alan pii*r^2 kaavalla
  float calculateArea() override;
private:
  float pii = 3.14;
};

#endif // DERIVEDCLASS_H
