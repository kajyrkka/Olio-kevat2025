#include "mittari.h"
#include <QThread>

Mittari::Mittari (QObject * parent):QObject(parent) {
  qDebug()<<"Mittarin konstruktori\n";
  sensori = new TemperatureSensor(this);
  connect(this,&Mittari::readT,sensori,&TemperatureSensor::receiveMeasurementCommand);
  connect(sensori,&TemperatureSensor::TValue,this,&Mittari::temperatureSlot);

}

Mittari::~Mittari()
{
  qDebug()<<"Mittarin destruktori\n";
}

void Mittari::beginSlot()
{
  qDebug()<<"Mittarin beginSlot() funktiossa\n";

  for(int i = 0;i<2;i++)
  {
      // lähetetaan mittauspyynto TemperatureSensor oliolle
      // vastaanotetaan tämän luokan sisälla lampötila
      // arvo ja printataan se näkyville.
      emit readT();
      QThread::msleep(1000);
  }
  qDebug()<<"Lahetan finished signaalin\n";
  emit finished();
}

void Mittari::temperatureSlot(float luku)
{
    qDebug()<<"Vastaanotettiin lampotila\n";
    qDebug()<<"lampotila = "<< luku;
}

void Mittari::printOK()
{

}
