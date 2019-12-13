#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer {

    vector<Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami) : idOstatniegoAdresata(0), plikZAdresatami(nazwaPlikuZAdresatami) {};
    void dodajAdresata(int);
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENADZER_H
