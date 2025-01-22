#ifndef KOOSTAJA_H
#define KOOSTAJA_H

#include "osa.h"

class Koostaja
{
public:
    Koostaja();
    ~Koostaja();

    Osa osaPinosta;

    static void staticFunctionExample();

    Osa * pOsa;

private:



    void kaytetaanPointteriaFunctio();

};

#endif // KOOSTAJA_H
