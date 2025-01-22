#include "koostaja.h"

Koostaja::Koostaja():osaPinosta(20) // pitää alustaa pinosta luotu muuttuja
{
    cout<<"Koostaja luotu"<<endl;
    cout<<"Seuraavaksi luodaa Osa olio heapista"<<endl;
    pOsa = new Osa(10);

}

Koostaja::~Koostaja()
{
    delete pOsa;
    pOsa = nullptr;
    cout<<"Koostaja tuhottu"<<endl;
}

void Koostaja::staticFunctionExample()
{
    cout<<"staattinen functio"<<endl;
}

void Koostaja::kaytetaanPointteriaFunctio()
{
    pOsa->printLuku();
}
