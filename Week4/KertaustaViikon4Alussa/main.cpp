#include <iostream>
#include "baseclass.h"
#include "derivedclass.h"
using namespace std;

int main ()
{



  BaseClass laskin1(2.0,2.0);
  DerivedClass laskin2(2.0,2.0);

  cout << "laatikko ala =" << laskin1.BaseClass::calculateArea() << endl;
  cout << "laatikko ala =" << laskin2.BaseClass::calculateArea() << endl;
  cout << "ympyran ala ="<<laskin2.calculateArea()<<endl;
  return 0;
}
