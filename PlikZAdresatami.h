#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {

    const string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat);
    bool czyPlikJestPusty(fstream&);
    Adresat pobierzDaneAdresata(string);
public:
    PlikZAdresatami(string nazwaPliku) : nazwaPlikuZAdresatami(nazwaPliku) {};
    void dopiszAdresataDoPliku(Adresat);
    vector<Adresat> wczytajAdresatowZPliku();
};

#endif // PLIKZADRESATAMI_H
