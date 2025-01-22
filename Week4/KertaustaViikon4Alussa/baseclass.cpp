#include "baseclass.h"


BaseClass::BaseClass(float l, float k)
{
  leveys = l;
  korkeus = k;
}

float BaseClass::calculateArea()
{
  return leveys*korkeus;
}
