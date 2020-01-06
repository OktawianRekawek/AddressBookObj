#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string, string);
    ~KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowanieUzytownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wypiszWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    void edytujAdresata();
    void usunAdresata();
    void wyszukajAdresatowPoImieniu();
};
#endif //KSIAZKAADRESOWA_H
