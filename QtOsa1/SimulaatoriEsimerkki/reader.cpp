#include "reader.h"
#include "ui_reader.h"
#include <QDebug>

Reader::Reader(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Reader)
{
    ui->setupUi(this);
    connect(ui->card,&QPushButton::clicked,
            this,&Reader::handleCardNum);
    qDebug()<<"Readerin luotu";
}

Reader::~Reader()
{
    qDebug()<<"Readerin tuhottu";
    delete ui;
}

void Reader::handleCardNum()
{
    qDebug()<<"Readerin slot funktiossa";
    QString number = ui->cardNumLineEdit->text();
    emit sendCardNum(number);
}
