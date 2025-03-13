#include "pinui.h"
#include "ui_pinui.h"
#include <QDebug>

Pinui::Pinui(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pinui)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,
            this,&Pinui::handleClick);

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,
            this,&Pinui::timeout);
    timer->start(3000);
}

Pinui::~Pinui()
{
    qDebug()<<"Pinui tuhottu";
    delete ui;
}

void Pinui::handleClick()
{
    timer->start(3000);
    qDebug()<<"Pinui click handler";
    QString pin = ui->lineEdit->text();

    qDebug()<<"Pinui lahettaa pinNumeron signaalina";
    emit sendPinNum(pin);
}

void Pinui::timeout()
{
    qDebug()<<"Pinui timeout handler";
     qDebug()<<"Pinui lahettaa timeout signaalin";
    emit PinuiTimeOut();
}
