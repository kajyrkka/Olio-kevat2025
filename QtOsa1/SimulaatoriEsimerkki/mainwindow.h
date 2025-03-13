#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reader.h"
#include "pinui.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void handleCardButton();
    void handlePinButton();
    void handleCardNum(QString);
    void handlePinNum(QString);
    void handlePinuiTimeOut();

private:
    Ui::MainWindow *ui;
    Reader * reader;
    Pinui * pinui;
};
#endif // MAINWINDOW_H
