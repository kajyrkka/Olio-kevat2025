#include "luottotili.h"
#include <iostream>
Luottotili::Luottotili(string n, double s):Pankkitili(n)
{
    luottoraja = -s;
    cout<<"Luotiin luottotili "<<omistaja<<":lle luottorajalla "<<s<<endl;
}

bool Luottotili::deposit(double pano)
{
    if(pano <0)
    {
        cout<<"Ei voi laittaa negatiivista summaa"<<endl;
        return false;
    }
    else if(saldo + pano > 0)
    {
        cout<<"Luottotilin saldo ei saa mennä yli nollan"<<endl;
        return false;
    }
    saldo = saldo + pano;
    cout << "Talletit luottotilille "<< pano <<" summa  rahaa" <<endl;
    return true;

}

bool Luottotili::withdraw(double nosto)
{
    if(nosto<0)
    {
        cout<<"Ei voi nostaa negatiivista summaa"<<endl;
        return false;
    }
    else if(saldo-nosto<luottoraja)
    {
        cout<<"Nosto ylittaa luottorajan"<<endl;
        return false;
    }
    saldo = saldo - nosto;
    cout<<"Nostit luottoililta "<< nosto<< " summan rahaa" <<endl;
    cout<<"Luottoa jaljella "<<-luottoraja+saldo<<endl;
    return true;

}
