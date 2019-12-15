#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H


#include <iostream>
#include <windows.h>
#include <sstream>
#include <algorithm>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze {

public:
    static string konwerjsaIntNaString(int);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string);
};

#endif // METODYPOMOCNICZE_H
