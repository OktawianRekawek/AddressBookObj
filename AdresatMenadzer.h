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
public:
    void dodajAdresata(int);
};

#endif // ADRESATMENADZER_H
