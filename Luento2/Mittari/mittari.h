#ifndef MITTARI_H
#define MITTARI_H
#include "lcd.h"
#include "dht.h"
#include <iostream>
using namespace std;

class Mittari
{
public:
  Mittari ();
  ~Mittari();
  void setup();
  void mittaus();
  LCD lcdolio;
  DHT dhtolio;

private:
  int varoitusvalo;


};

#endif // MITTARI_H
