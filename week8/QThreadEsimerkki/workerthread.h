#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H
#include <QThread>
class WorkerThread : public QThread
{
    Q_OBJECT
public:
    WorkerThread(QObject * parent);
    ~WorkerThread();
    virtual void run() override;

signals:
    void resultReady(const QString&);
};

#endif // WORKERTHREAD_H
