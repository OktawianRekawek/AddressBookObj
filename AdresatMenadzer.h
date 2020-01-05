#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer {

    vector<Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();

public:
    AdresatMenadzer(string, int);
    void dodajAdresata();
    void wypiszWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void edytujAdresata();
};

#endif // ADRESATMENADZER_H
