#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workerthread.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,
            this,&MainWindow::clickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startWorkInThread()
{
    WorkerThread * ptr = new WorkerThread(this);
    connect(ptr,&WorkerThread::resultReady,this,&MainWindow::receiveResult);
    ptr->start();
}

void MainWindow::receiveResult(const QString& t)
{
    qDebug()<<"WorkerThread lahettaa = "<<t;
}

void MainWindow::clickHandler()
{
    startWorkInThread();
}
