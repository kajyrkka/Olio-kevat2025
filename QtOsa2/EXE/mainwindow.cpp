#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,
            this,&MainWindow::handleClick);

    ptrDLL = new DLLEsimerkki;
    huuha();

    ptrRFID = new RFID_DLL(this);
    connect(ptrRFID,&RFID_DLL::sendSignalToExe,
            this,&MainWindow::handleRFIDSignal);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrDLL;
    //delete ptrRFID;

}

void MainWindow::handleClick()
{
    ptrRFID->test();
}

void MainWindow::handleRFIDSignal(QString s)
{
    qDebug()<<"Vastaanotettiin signaali RFID DLLsta";
    ui->lineEdit->setText(s);
}
