#ifndef ADRESAT_H
#define ADRESAT_H


class Adresat {
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string nrTelefonu;
    string email;
    string adres;

public:

    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNrTelefonu(string nowyNrTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNrTelefonu();
    string pobierzEmail();
    string pobierzAdres();

};

#endif // ADRESAT_H
