#include "koostaja.h"

int main()
{
  /*
   * Asiat, jotka tästä esimerkistä pitäisi käydä läpi
   * 1. On siis olemassa 2 tapaa, miten osa olio luodaan koosteoliossa
   *    - luokassa on Osa luokkaan osoittava pointterimuuttuja
   *    - luokassa on Osa luokka muuttujana.
   *
   * 2. Jos "muuttujana" oleva Osa luokan konstruktori ottaa parametreja, niin
   *    Osa luokka pitää alustaa koostajan konstruktorissa ennen konstruktorin
   *    kutsumista :Osa(parametrit) -syntaksilla
   *
   * 3. Kolme eri tapaa kutsua olion metodeja
   *    - .metodi()
   *    - ->metodi()
   *    - luokanNimi::metodi()
   *
   */




    Koostaja * ptr;


    ptr = new Koostaja;
    ptr->pOsa->printLuku(); // 10
    ptr->osaPinosta.printLuku(); // 20
    Koostaja::staticFunctionExample();

    delete ptr;
    ptr = nullptr;
    return 0;
}
