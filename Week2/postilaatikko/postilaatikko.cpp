#include "postilaatikko.h"

Postilaatikko::Postilaatikko()
{
    cout << "luotiin postilaatikko" <<endl;
    osoite = "Yliostokatu 9. 90570 Oulu";
    maara = 0;
}

Postilaatikko::~Postilaatikko()
{
    cout << "tuhottiin postilaatikko" <<endl;
    osoite = "";
}



void Postilaatikko::lisaaPosti(int lkm)
{
    maara = maara + lkm;
    cout << "laatikossa nyt "<< maara << "kpl postia" <<endl;
}

void Postilaatikko::otaPosti(int lkm)
{
    maara = maara - lkm;
    cout << "laatikossa nyt "<< maara << "kpl postia" <<endl;

}

void Postilaatikko::asetaNimi(string s)
{
    nimi = s;
    cout << "laatikon nimi on nyt " << nimi << endl;
}
