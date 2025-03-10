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

    reader = new Reader(this);
    connect(reader,&Reader::sendCardNum,
            this,&MainWindow::handleCardNum);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCardButton()
{
    qDebug()<<"Card Button pressed";
    //reader->show();
    reader->open();
    //reader->exec();
    qDebug()<<"suoritettiinko tama viela???";

}

void MainWindow::handlePinButton()
{

}

void MainWindow::handleCardNum(QString s)
{
   qDebug()<<"Vastaanotettiin kortin numero";
    ui->cardNum->setText(s);
}




