#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,
            this,&MainWindow::click_handler);

    pOlio = new QTimer(this);
    connect(pOlio,&QTimer::timeout,
            this,&MainWindow::timeOutHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::click_handler()
{
    pOlio->start(1000);
}

void MainWindow::timeOutHandler()
{
    aika++;
    QString a = QString::number(aika);
    ui->lineEdit->setText(a);
}

