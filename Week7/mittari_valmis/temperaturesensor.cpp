#include "temperaturesensor.h"

#include <QDebug>




TemperatureSensor::TemperatureSensor(QObject *parent):QObject(parent)
{
    qDebug()<<"TemperatureSensor konstruktori";
}

TemperatureSensor::~TemperatureSensor()
{
    qDebug()<<"TemperatureSensor destruktori";
}

void TemperatureSensor::receiveMeasurementCommand()
{
    qDebug()<<"Saatiin mittauskomento";
    float number = 25.4;
    emit TValue(number);
    qDebug()<<"Lahetin lampotilan";
}
