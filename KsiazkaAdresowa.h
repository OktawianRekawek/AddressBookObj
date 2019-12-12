#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "UzytkownikMenadzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
public:
    KsiazkaAdresowa(string);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif //KSIAZKAADRESOWA_H
