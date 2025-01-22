#include "osa.h"

Osa::Osa(int n)
{
    cout<<"Osa luotu"<<endl;
    luku = n;
}

Osa::~Osa()
{
    cout<<"Osa tuhottu"<<endl;
}

void Osa::printLuku()
{
  cout <<"luku = "<< luku <<endl;
}
