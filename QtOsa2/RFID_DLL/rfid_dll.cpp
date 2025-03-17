#include "rfid_dll.h"
#include <QDebug>

RFID_DLL::RFID_DLL(QObject * parent) : QObject(parent)
{
    qDebug()<<"RDID DLL luotu";

}

RFID_DLL::~RFID_DLL()
{
    qDebug()<<"RDID DLL tuhottu";
}

void RFID_DLL::test()
{
    qDebug()<<"RDID DLL test funktio";

    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : serialPortInfos) {
        qDebug() << "\n"
                 << "Port:" << portInfo.portName() << "\n"
                 << "Location:" << portInfo.systemLocation() << "\n"
                 << "Description:" << portInfo.description() << "\n"
                 << "Manufacturer:" << portInfo.manufacturer() << "\n"
                 << "Serial number:" << portInfo.serialNumber() << "\n"
                 << "Vendor Identifier:"
                 << (portInfo.hasVendorIdentifier()
                         ? QByteArray::number(portInfo.vendorIdentifier(), 16)
                         : QByteArray()) << "\n"
                 << "Product Identifier:"
                 << (portInfo.hasProductIdentifier()
                         ? QByteArray::number(portInfo.productIdentifier(), 16)
                         : QByteArray());
    }

    emit sendSignalToExe("COM4 auki");
}
