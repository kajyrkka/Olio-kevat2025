#include "derivedclass.h"
#include <algorithm> // std::min()




DerivedClass::DerivedClass(float l, float k):BaseClass(l,k)
{

}

float DerivedClass::calculateArea()
{
  float minimi = std::min(leveys,korkeus);
  float sade = minimi/2;
  return pii*(sade*sade);
}
