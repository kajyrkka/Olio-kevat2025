#include "baseclass.h"
#include <iostream>
using namespace std;

BaseClass::BaseClass (int a, int b) {
  cout<<"BaseClass muodostettu"<<
"vastaanotettiin 2 integeria aliluokalta"<<endl;
  foo = a;
  bar = b;
}

void BaseClass::alusta()
{
  foo = 1;
  bar = 2;
  huuhaa = 3;
}
