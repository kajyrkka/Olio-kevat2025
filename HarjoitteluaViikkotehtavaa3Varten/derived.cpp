#include "derived.h"
#include <iostream>
using namespace std;

Derived::Derived (int a, int b):BaseClass(a,b)
{
  cout<<"Derived konstruktori, valittaa 2 int "<<
      "parametria BaseClass konstruktorille"<<endl;
}

void Derived::kaytaBasea()
{
  this->bar=10; // eli voidaan käyttää bar muuttujaa
                // vaikka tämä ei main.cpp:ssä näy
                // mutta derived luokan sisäll
                // perityt private muuttujia lukuun
                // ottamatta näkyvät.
  this->foo = 20;
  // this->huuhaa ei onnistu, koska huuhaa on private
}
