#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H
#include <iostream>
using namespace std;

class Postilaatikko
{
public:
    Postilaatikko();  // Muodostin = constructor
    ~Postilaatikko(); // Tuhoaja = destructor

    void lisaaPosti(int);
    void otaPosti(int);
    void asetaNimi(string);


    string nimi;

protected:
    string osoite;

private:
    int maara;

};

#endif // POSTILAATIKKO_H
