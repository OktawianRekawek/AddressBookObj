#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    cout << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() << endl;
    ksiazkaAdresowa.wylogowanieUzytownika();
    return 0;
}
