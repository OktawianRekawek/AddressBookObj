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
    AdresatMenadzer(string);
    void dodajAdresata(int);
    void wypiszWszystkichAdresatow();
    void wczytajAdresatowZPliku();
};

#endif // ADRESATMENADZER_H
