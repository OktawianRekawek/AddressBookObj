#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer {

    vector<Adresat> adresaci;
    int idOstatniegoAdresata;

    Adresat podajDaneNowegoAdresata(int);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenadzer() : idOstatniegoAdresata(0) {};
    void dodajAdresata(int);
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENADZER_H
