#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(lahettajanOsoite, lahettajanSignaaliFunktionOsoite,
    //           vastaanottajanOsoite, vastaanottajanSignaaliFKTOsoite);
    connect(ui->card,&QPushButton::clicked,
            this,&MainWindow::handleCardButton);

    connect(ui->pin,&QPushButton::clicked,
            this,&MainWindow::handlePinButton);





}

MainWindow::~MainWindow()
{
    delete ui;
    delete reader;
    delete pinui;
}

void MainWindow::handleCardButton()
{
    reader = new Reader(this);
    connect(reader,&Reader::sendCardNum,
            this,&MainWindow::handleCardNum);
    qDebug()<<"Card Button pressed";
    //reader->show();
    reader->open();
    //reader->exec();
    qDebug()<<"suoritettiinko tama viela???";

}

void MainWindow::handlePinButton()
{
   51
    connect(pinui,&Pinui::sendPinNum,
            this,&MainWindow::handlePinNum);
    connect(pinui,&Pinui::PinuiTimeOut,
            this,&MainWindow::handlePinuiTimeOut);
    qDebug()<<"Pin Button pressed";
    pinui->open();
}
void MainWindow::handleCardNum(QString s)
{
   qDebug()<<"Vastaanotettiin kortin numero";
    ui->cardNum->setText(s);
   reader->close();
    delete reader;
}

void MainWindow::handlePinNum(QString s)
{
    qDebug()<<"Vastaanotettiin pin numero";
    ui->pinNum->setText(s);
    pinui->close();
    delete pinui;
}

void MainWindow::handlePinuiTimeOut()
{
    qDebug()<<"Vastaanotettiin timeout signaali";
    pinui->close();
    delete pinui;
}




