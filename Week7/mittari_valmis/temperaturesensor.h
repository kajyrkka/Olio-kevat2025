#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include <QObject>

/*
 * 1 include QObject
 * 2 peri QObject
 * 3 Q_OBJECT makro
 * 4 Muuta konstructori sellaiseksi, että se ottaa
 *   QObject pointterin.
 * 5 Lisätään luokkaan signals: ja private slots: tai
 *   public slots: signaalien välittämistä varten.
 */



class TemperatureSensor : public QObject
{
    Q_OBJECT
public:
    TemperatureSensor(QObject * parent = nullptr);
    ~TemperatureSensor();
signals:
    void TValue(float);  // tätä ei toteuteta

public slots:
    void receiveMeasurementCommand();
};

#endif // TEMPERATURESENSOR_H
