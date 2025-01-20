#ifndef DERIVED_H
#define DERIVED_H
#include "baseclass.h"

class Derived :public BaseClass
{
public:
  Derived (int, int); // Derived luokan konstruktorin on pakko
                      // ottaa kaksi int parametria, koska
                      // perittävä luokka BaseClass konstruktori
                      // tarvitsee nuo kaksi muuttujaa
  void kaytaBasea();
};

#endif // DERIVED_H
