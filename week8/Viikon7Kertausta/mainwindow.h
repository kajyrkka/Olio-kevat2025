#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void click_handler();
    void timeOutHandler();


private:
    Ui::MainWindow *ui;
    int aika = 0;
    QTimer * pOlio;

};
#endif // MAINWINDOW_H
