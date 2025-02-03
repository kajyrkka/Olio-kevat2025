#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(string name, double lraja):
    kayttotili(name),
    luottotili(name,lraja)
{
    nimi=name;
    cout<<"Asiakkaalle "<<nimi<<"luotiin kaytto- ja luottotili"<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout <<"Kayttotilin saldo = "<<kayttotili.getBalance() <<endl;
    cout <<"Luottotilin saldo = "<<luottotili.getBalance() <<endl;
}

bool Asiakas::talletus(double s)
{
    return kayttotili.deposit(s);
}

bool Asiakas::nosto(double s)
{
    return kayttotili.withdraw(s);
}

bool Asiakas::luotonMaksu(double s)
{
    return luottotili.deposit(s);
}

bool Asiakas::luotonNosto(double s)
{
    return luottotili.withdraw(s);
}

bool Asiakas::tilisiirto(double summa, Asiakas & tili)
{
    if(kayttotili.getBalance() >= summa)
    {
        cout<<nimi<<":n kayttotililla on riittavasti rahaa siirtoon"<<endl;
        kayttotili.withdraw(summa); // nostetaan rahat tililta
        cout<<"siirretaan "<<tili.nimi<<":n tilille"<<endl;
        bool paluuarvo = tili.kayttotili.deposit(summa);
        return paluuarvo;
    }
    else
    {
        cout<<"kayttotililla ei ollut riittavasti raha tai annoit negat."<<endl;
        return false;
    }
}
