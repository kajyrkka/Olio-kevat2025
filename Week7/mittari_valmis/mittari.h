#ifndef MITTARI_H
#define MITTARI_H

#include <QObject>
#include <QDebug>
#include "temperaturesensor.h"

class Mittari : public QObject
{
  Q_OBJECT
public:
  Mittari (QObject * parent = nullptr);
  ~Mittari();

signals:
  void readT();
  void printSignal(float);
  void finished();

public slots:
  void beginSlot();
  void temperatureSlot(float);
  void printOK();

private:
  float temperature;
    TemperatureSensor * sensori;
};

#endif // MITTARI_H
