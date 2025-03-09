#include "workerthread.h"
#include <QDebug>
WorkerThread::WorkerThread(QObject * parent):QThread(parent)
{
    qDebug()<<"Worker Thread luotu";
}

WorkerThread::~WorkerThread()
{
    qDebug()<<"Worker Thread tuhottu";
}

void WorkerThread::run()
{
    QString tulos = "";
    for(int i = 0;i<5;i++)
    {
        this->sleep(1);
        tulos = tulos + QString::number(i);
        emit resultReady(tulos);
    }
}
