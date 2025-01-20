#include "pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili (string n, string t, double s):tilinomistaja(n),tilinumero(t),saldo(s)
{
  //tilinomistaja = n;
  //tilinumero = t;
  //saldo = s;
}


void Pankkitili::tallete(double s)
{
  saldo = saldo + s;
}

void Pankkitili::nosta(double s)
{
  saldo = saldo - s;
}

void Pankkitili::tulostaTilitiedo()
{
  cout<<"Tilinomistaja = "<<tilinomistaja<<endl;
  cout<<"Tilinumero = "<<tilinumero<<endl;
  cout<<"Saldo = "<<saldo<<endl;
}

string Pankkitili::getTilinumero()
{
  return tilinumero;
}

double Pankkitili::getSaldo()
{
  return saldo;
}

bool Pankkitili::siirra(Pankkitili &tili, double s)
{

  if(saldo-s <0)
    {
      return false;
    }
  else
    {
      tili.tallete(s);
      return true;
    }
  tili.tallete(s);
}
