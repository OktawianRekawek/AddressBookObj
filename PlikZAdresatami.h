#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy {

    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string);
    Adresat pobierzDaneAdresata(string);
    void edytujWybranaLinieWPliku(string);
    void usunPlik(string);
    void zmienNazwePliku(string, string);
public:
    PlikZAdresatami(string);
    bool dopiszAdresataDoPliku(Adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int);
    int pobierzIdOstatniegoAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat);
    void usunWybranegoAdresataZPliku(int);
};

#endif // PLIKZADRESATAMI_H
