#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {

    const string NAZWA_PLIKU_Z_ADRESATAMI;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat);
    Adresat pobierzDaneAdresata(string);
public:
    PlikZAdresatami(string nazwaPliku) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPliku) {};
    void dopiszAdresataDoPliku(Adresat);
    vector<Adresat> wczytajAdresatowZPliku();
};

#endif // PLIKZADRESATAMI_H
