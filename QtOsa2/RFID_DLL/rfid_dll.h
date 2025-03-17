#ifndef RFID_DLL_H
#define RFID_DLL_H

#include "RFID_DLL_global.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QObject>

class RFID_DLL_EXPORT RFID_DLL : public QObject
{
    Q_OBJECT
public:
    RFID_DLL(QObject * parent = nullptr);
    ~RFID_DLL();
    void test();

signals:
    void sendSignalToExe(QString);

};

#endif // RFID_DLL_H
