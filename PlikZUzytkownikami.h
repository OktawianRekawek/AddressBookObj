#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami {

    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty(fstream&);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string);
public:
    PlikZUzytkownikami(string nazwaPliku) : nazwaPlikuZUzytkownikami(nazwaPliku) {};
    void dopiszUzytkownikaDoPliku(Uzytkownik);
    vector<Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif //PLIKZUZYTKOWNIKAMI_H
