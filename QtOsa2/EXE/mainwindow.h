#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllesimerkki.h"
#include "rfid_dll.h"

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
    void handleClick();
    void handleRFIDSignal(QString);
private:
    Ui::MainWindow *ui;
    DLLEsimerkki * ptrDLL;
    RFID_DLL * ptrRFID;
};
#endif // MAINWINDOW_H
