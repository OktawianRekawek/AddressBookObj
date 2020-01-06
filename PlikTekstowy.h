#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>
#include <fstream>

using namespace std;

class PlikTekstowy {

protected:
    const string NAZWA_PLIKU;

    bool czyPlikJestPusty(fstream&);

public :
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {};
};

#endif // PLIKTEKSTOWY_H
