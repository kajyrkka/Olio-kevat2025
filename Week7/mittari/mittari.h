#ifndef MITTARI_H
#define MITTARI_H

#include <QObject>
#include <QDebug>

class Mittari : public QObject
{
  Q_OBJECT
public:
  Mittari (QObject * parent = nullptr);
  ~Mittari();

signals:
  void readTemperatureSignal();
  void printSignal(float);
  void finished();

public slots:
  void beginSlot();
  void temperatureSlot();
  void printOK();

private:
  float temperature;
};

#endif // MITTARI_H
