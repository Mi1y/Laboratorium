#include <iostream>

using namespace std;

class DANE_OSOBOWE {
protected:
    string imie, nazwisko;
    int wiek;

public:
    DANE_OSOBOWE(string imie, string nazwisko, int wiek) : imie(imie), nazwisko(nazwisko), wiek(wiek) {}
    virtual void wyswietl() = 0;
};

class STUDENT : public DANE_OSOBOWE {
private:
    float srednia;
    string kierunek;

public:
    STUDENT(string imie, string nazwisko, int wiek, float srednia, string kierunek) : DANE_OSOBOWE(imie, nazwisko, wiek), srednia(srednia), kierunek(kierunek) {}
    float obliczsumekontrolna() {
        return srednia/wiek;
    }
    void wyswietl() {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << ", Suma kontrolna: " << obliczsumekontrolna() << endl;
    }
};

class PRACOWNIK : public DANE_OSOBOWE {
private:
    int staz;
    float pensja;

public:
    PRACOWNIK(string imie, string nazwisko, int wiek, int staz, float pensja) : DANE_OSOBOWE(imie, nazwisko, wiek), staz(staz), pensja(pensja) {}
    float obliczsredniadochodu() {
        return (staz*12*pensja)/wiek;
    }
    void wyswietl() {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << ", Srednia dochodu: " << obliczsredniadochodu() << endl;
    }
};

int main()
{
    STUDENT student("Milosz", "Dudka", 24, 3.5, "Informatyka");
    PRACOWNIK pracownik("Janusz", "Kowalski", 35, 7, 3500);

    student.wyswietl();
    pracownik.wyswietl();

    return 0;
}
