#include "dllesimerkki.h"
#include <QDebug>

DLLEsimerkki::DLLEsimerkki() {

    qDebug()<<"DLL komponentti luotu";

}

DLLEsimerkki::~DLLEsimerkki()
{
     qDebug()<<"DLL komponentti tuhottu";
}

void huuha()
{
    qDebug()<<"Huuhaa funktiossa!";
}
