#include <QCoreApplication>
#include "mittari.h"
#include <QDebug>
#include <QTimer>

/*
 * Mitä tästä esimerkistä pitäisi käydä läpi/osata?
 * 1. Miten tehdään luokka, joka kykenee lähettämään signaaleja
 *    ja tuhoutuu automaattisesti, kun sovellus "tapetaan" =>
 *    hieno juttu sovelluksessa, jossa on sadoittain heapista
 *    luotuja olioita (käyttöliittymän buttonit, lineEdit, jne)
 *    -  Luokan pitää periä QObject
 *    -  Luokkaan pitää lisätä Q_OBJECT maksro
 *    -  Luokassa pitää olla signals: private slots: tai public slots:
 *       joiden "alla" määriteltynä signaalifunktiot tai slot funktiot
 *    -  Luokan konstruktorin pitää ottaa parametrina pointteri, joka
 *       on tyyppiä QObject. Ja tuo pointteri pitää välittää
 *       luokan konstruktorissa peritylle QObject luokalle.
 *  2. Katsotaan miten Qt luokkakirjaston dokumentaatiota luetaan.
 *  3. QObject::connect() häh???
 *  4. Jatketaan tästä porukalla lisäämällä
 *     TemperatureSensor luokka, jolle
 *     - lähetetään readTemperaTureSignal()
 *     - vastaanotetaan temperatureSignal(float)
 *
 */


int main (int argc, char *argv[])
{
  QCoreApplication app (argc, argv);


  Mittari * pmittari = new Mittari();

                       // valitetaan isännän osoite
                       // niin mittari tuhoutuu automaattisesti
                       // kun sovellus "kuolee"





  //QObject::connect(pmittari,SIGNAL(finished()),&app,SLOT(quit()));
  app.connect(pmittari,&Mittari::finished,
                   &app,&QCoreApplication::quit,
Qt::QueuedConnection);


  pmittari->beginSlot();

  int returnValue = app.exec();

  qDebug()<<"Seuraavaksi tuhoan mittarin";
  qDebug()<<", jonka pitaisi tuhota automaattisesti myos temperatureSensor";
  delete pmittari;
  return returnValue;
}
