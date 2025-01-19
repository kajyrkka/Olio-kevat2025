//#include "sonclass.h"
#include "fatherclass.h"

/*
 * Issues from this example:
 * 1. Only Father public methods are
 *    visible at son object.
 *
 * 2. Father protected methods are
 *    usable at all son class methods
 *    i.e. within son class.
 *
 * 3. check what happens if public
 *    inheritance is changed to
 *    protected and to private.
 *
 * 4. And let's see how we can
 *    initialize class attibutes
 *    (= muuttujia) before
 *    construcor executes.
 *
 *  Maanantain ongelma:
 *  Jos FatherClassiin lisää
 *  include SonClass, niin
 *  SonClass.h incluudaa FatherClassin,
 *  joka puolestaan incluudaa SonClassin
 *  joka puolestaan incluudaa Fatherin,
 *
 *  jne... päättymätön ketju. Eli
 *  Ei voi olla
 *
 * */



int main()
{

   FatherClass object;
   object.poika.showSonData();
    //SonClass object;


    //object.showSonData();
    object.showFamilyInfo();


    return 0;
}
