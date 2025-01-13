#include "mittari.h"

Mittari::Mittari () {
  cout<<"mittari luotu"<<endl;
  setup();
}

Mittari::~Mittari()
{
  cout<<"mittari tuhottu"<<endl;
}

void Mittari::setup()
{
  varoitusvalo = 0;
  lcdolio.begin();
  dhtolio.begin();
}

void Mittari::mittaus()
{
  float t =dhtolio.readTemperature();
  if(t<10)
    {
      varoitusvalo = 1;
    }
  else
    {
      varoitusvalo = 0;
    }

  if(varoitusvalo == 1)
    {
      cout<<"lampotila alhainen"<<endl;
    }
  string s = lcdolio.floatToString(t);
  lcdolio.print(s);

}
