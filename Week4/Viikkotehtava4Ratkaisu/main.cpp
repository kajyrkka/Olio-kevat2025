#include "asiakas.h"

using namespace std;

/*
 * Katsotaan tästä tehtävästä kertauksena
 * 1. Miten talletetaan Pankkitili(string)
 *    parametri
 * 2. Miten nosto ja talletus logiikka menikään
 * 3. Miten perintä ja ylikirjoitus?
 *    Miksi Pankkitilin konstruktori suoritetaan 2x
 * 4. Asiakas luokassa "muuttujina" kaksi olioa
 *    - miten näiden alustus?
 * 5. Miten käytetään koosteolioita hyödyksi
 *    Asiakas luokan toteutuksessa?
 * 6. Siirto funktion toteutus.
 *
 *
 */



int main()
{
    Asiakas asiakas("Aapeli",1000);
    asiakas.showSaldo();

    asiakas.talletus(200);
    asiakas.luotonNosto(150);
    asiakas.showSaldo();

    Asiakas toinen("Bertta",1000);

    asiakas.tilisiirto(50,toinen);
    toinen.showSaldo();

    return 0;
}
