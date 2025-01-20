#include <iostream>
#include "pankkitili.h"
using namespace std;

int main ()
{
  Pankkitili tili1("Anna Virtanen","1111",1000.5);
  Pankkitili tili2("Veijo Virtanen","2222",100.0);

  cout<<"tulostetaan tilitiedot"<<endl;
  tili1.tulostaTilitiedo();
  tili2.tulostaTilitiedo();
  return 0;
}
