#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
using namespace std;

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;

protected:
    double luottoraja;
};

#endif // LUOTTOTILI_H
