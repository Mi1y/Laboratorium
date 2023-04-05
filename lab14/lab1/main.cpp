#include <iostream>

using namespace std;
class Pojazdy {
protected:
    string Nazwa;
    int kolo;
    int maxpredkosc;
    int Liczbamiejsc;
public:
    Pojazdy(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Nazwa(Nazwa), kolo(kolo), maxpredkosc(maxpredkosc), Liczbamiejsc(Liczbamiejsc) {}
    virtual void wyswietl() = 0;
};
class Pojazdy_Kolowe : public Pojazdy {
public:
    Pojazdy_Kolowe(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy(Nazwa, kolo, maxpredkosc, Liczbamiejsc) {}
    void wyswietl() {
        cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc << endl;
    }
};

class Pojazdy_Szynowe : public Pojazdy {

public:
    Pojazdy_Szynowe(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy(Nazwa, kolo, maxpredkosc, Liczbamiejsc) {}
    void wyswietl() {
        cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc << endl;
    }
};

class Pojazdy_Drogowe : public Pojazdy_Kolowe {

public:
    Pojazdy_Drogowe(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy_Kolowe(Nazwa, kolo, maxpredkosc, Liczbamiejsc) {}
    void wyswietl() {
        cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc  << endl;
    }
};

class Samochody : public Pojazdy_Drogowe {

public:
    Samochody(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy_Drogowe(Nazwa, kolo, maxpredkosc, Liczbamiejsc) {}
    void wyswietl() {
        cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc << endl;
    }
};

class Wagony : public Pojazdy_Szynowe {

public:
    Wagony(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy_Szynowe(Nazwa, kolo,maxpredkosc, Liczbamiejsc) {}
void wyswietl() {
cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc << endl;
}
};

class Wozki : public Pojazdy_Kolowe {
private:
int ladownosc;
public:
Wozki(string Nazwa, int kolo, int maxpredkosc, int ladownosc, int Liczbamiejsc) : Pojazdy_Kolowe(Nazwa, kolo, maxpredkosc, Liczbamiejsc), ladownosc(ladownosc) {}
void wyswietl() {
cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc  << ", Ladownosc: " << ladownosc << ", Liczba miejsc: " << Liczbamiejsc <<endl;
}
};

class Lokomotywy : public Pojazdy_Szynowe {

public:
Lokomotywy(string Nazwa, int kolo, int maxpredkosc, int Liczbamiejsc) : Pojazdy_Szynowe(Nazwa, kolo, maxpredkosc, Liczbamiejsc) {}
void wyswietl() {
cout << "Nazwa: " << Nazwa << ", Liczba kol: " << kolo << ", Maksymalna Predkosc: " << maxpredkosc << ", Liczba miejsc: " << Liczbamiejsc << endl;
}
};
int main()
{
    Pojazdy_Kolowe pojazd("Pojazd Kolowy", 4, 120, 5);
    Pojazdy_Szynowe pociag("Pociag", 8, 160,300);
    Samochody samochod("Samochod", 6, 80,5);
    Wagony wagony ("Wagon", 8, 160, 100);
    Wozki wozki ("Wozek", 4, 20, 1000, 1);
    Lokomotywy lokomotywa("Lokomotywy", 8, 180,300);

    pojazd.wyswietl();
    pociag.wyswietl();
    samochod.wyswietl();
    wagony.wyswietl();
    wozki.wyswietl();
    lokomotywa.wyswietl();

    return 0;
}

