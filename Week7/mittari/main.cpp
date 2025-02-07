#include <QCoreApplication>
#include "mittari.h"
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


  Mittari * pmittari = new Mittari(&app);
                       // valitetaan isännän osoite
                       // niin mittari tuhoutuu automaattisesti
                       // kun sovellus "kuolee"

  QTimer timer;


  QObject::connect(pmittari,SIGNAL(finished()),&app,SLOT(quit()));
  QObject::connect(&timer,SIGNAL(timeout()),pmittari,SLOT(beginSlot()));

  timer.singleShot(200, pmittari, &Mittari::beginSlot);


  return app.exec ();
}
