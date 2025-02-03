#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;

class Pankkitili
{
public:
    Pankkitili(string);
    double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);


protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
