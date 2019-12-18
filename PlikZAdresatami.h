#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {

    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string);
    Adresat pobierzDaneAdresata(string);
public:
    PlikZAdresatami(string);
    bool dopiszAdresataDoPliku(Adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int);
    int pobierzIdOstatniegoAdresata();
};

#endif // PLIKZADRESATAMI_H
