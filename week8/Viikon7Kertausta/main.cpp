#include "mainwindow.h"

#include <QApplication>

/*
 * Katsotaan kertauksena seuraavat asiat:
 * 1. Miten käyttöliittymään lisätään nappeja jne ja layoutteja
 * 2. Mihin generoituu automaattinen koodi käyttöliittymästä.
 * 3. Tehdään yhdelle QPushbuttonille click handleri kahdella tavalla.
 * 4. Tutustutaan QTimer luokkaan Qt dokumentaation avulla ja
 *    tehdään sekunttikello
 * 5. Miten muutetaan QString=>luku ja päinvastoin
 */


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
