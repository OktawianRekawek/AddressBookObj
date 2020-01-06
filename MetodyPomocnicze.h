#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H


#include <iostream>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <algorithm>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze {

public:
    static string konwerjsaIntNaString(int);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string);
    static string pobierzLiczbe(string, int);
    static int konwersjaStringNaInt(string);
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
};

#endif // METODYPOMOCNICZE_H
