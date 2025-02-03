#include "pankkitili.h"
#include <iostream>



Pankkitili::Pankkitili(string name)
{
    omistaja = name; // yllättävä monelle tämä on ongelma!!!
    cout<<"Luotiin pankkitili "<<omistaja<<":lle"<<endl;

}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double pano)
{
    if(pano <0)
    {
        cout<<"Ei voi laittaa negatiivista summaa"<<endl;
        return false;
    }
    saldo = saldo + pano;
    cout << "Talletit pankkitilille "<< pano <<" summa  rahaa" <<endl;
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    if(nosto<0)
    {
        cout<<"Ei voi nostaa negatiivista summaa"<<endl;
        return false;
    }
    else if(saldo-nosto<0)
    {
       cout<<"Saldo ei riita nostamaan tata summaa"<<endl;
       return false;
    }
    saldo = saldo - nosto;
    cout<<"Nostit "<< nosto<< " summan rahaa" <<endl;
    return true;

}
