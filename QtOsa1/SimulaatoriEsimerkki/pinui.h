#ifndef PINUI_H
#define PINUI_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Pinui;
}

class Pinui : public QDialog
{
    Q_OBJECT

public:
    explicit Pinui(QWidget *parent = nullptr);
    ~Pinui();

signals:
    void sendPinNum(QString);
    void PinuiTimeOut();

private slots:
    void handleClick();
    void timeout();


private:
    Ui::Pinui *ui;
    QTimer * timer;
};

#endif // PINUI_H
