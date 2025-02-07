#include "mittari.h"

Mittari::Mittari (QObject * parent):QObject(parent) {
  qDebug()<<"Mittarin konstruktori\n";
}

Mittari::~Mittari()
{
  qDebug()<<"Mittarin destruktori\n";
}

void Mittari::beginSlot()
{
  qDebug()<<"Mittarin beginSlot() funktiossa\n";
  qDebug()<<"Lahetan finished signaalin\n";
  emit finished();
}

void Mittari::temperatureSlot()
{

}

void Mittari::printOK()
{

}
