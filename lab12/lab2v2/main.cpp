#include <iostream>
using namespace std;

class Zespolona {
private:
double Im, Re;

public:
Zespolona() {
Im = 0.0;
Re = 0.0;
}
Zespolona(double wartosc) {
    Im = wartosc;
    Re = wartosc;
}

Zespolona(double Re, double Im) {
    this->Im = Im;
    this->Re = Re;
}

Zespolona dodaj(Zespolona z1, Zespolona z2) {
    Zespolona wyn;
    wyn.Re = z1.Re + z2.Re;
    wyn.Im = z1.Im + z2.Im;
    return wyn;
}

Zespolona odejmij(Zespolona z1, Zespolona z2) {
    Zespolona wyn;
    wyn.Re = z1.Re - z2.Re;
    wyn.Im = z1.Im - z2.Im;
    return wyn;
}

Zespolona pomnoz(Zespolona z1, Zespolona z2) {
    Zespolona wyn;
    wyn.Re = (z1.Re * z2.Re) - (z1.Im * z2.Im);
    wyn.Im = (z1.Re * z2.Im) + (z1.Im * z2.Re);
    return wyn;
}

Zespolona podziel(Zespolona z1, Zespolona z2) {
    Zespolona wyn;
    double dzielnik = (z2.Re * z2.Re) + (z2.Im * z2.Im);
    wyn.Re = ((z1.Re * z2.Re) + (z1.Im * z2.Im)) / dzielnik;
    wyn.Im = ((z1.Im * z2.Re) - (z1.Re * z2.Im)) / dzielnik;
    return wyn;
}

void wyswietl(int index) {
    cout << "Liczba zespolona o indeksie " << index << " to: " << Re << " + " << Im << "i" << endl;
}
};

int main() {
Zespolona *Vector = new Zespolona[100];
int n = 0;
char wybor;
cout << "Wybierz polecenie: " << endl;
cout << "1 (N): utworzenie liczby zespolonej " << endl;
cout << "2 (R): utworzenie liczby zespolonej " << endl;
cout << "3 (W): wyswietla wartosc liczby zespolonej o podanym indeksie zapisanej w tablicy " << endl;
cout << "4 (+): suma dwu liczb zespolonych " << endl;
cout << "5 (-): roznica dwu liczb zespolonych " << endl;
cout << "6 (): iloczyn dwu liczb zespolonych " << endl;
cout << "7 (/): iloraz dwu liczb zespolonych " << endl;
cout << "8 (K): koniec programu " << endl;
cin >> wybor;
switch (wybor) {
case '1':
{
double im, re;
    cout << "Podaj wartosc rzeczywista liczby zespolonej: " << endl;
    cin >> re;
    cout << "Podaj wartosc urojona liczby zespolonej: " << endl;
    cin >> im;
    Vector[n] = Zespolona(re, im);
    n++;
    cout << "Liczba zespolona zostala utworzona i zapisana w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '2':
{
    double wartosc;
    cout << "Podaj wartosc liczby zespolonej: " << endl;
    cin >> wartosc;
    Vector[n] = Zespolona(wartosc);
    n++;
    cout << "Liczba zespolona zostala utworzona i zapisana w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '3':
{
    int index;
    cout << "Podaj indeks liczby zespolonej: " << endl;
    cin >> index;
    Vector[index]->wyswietl(index);
    break;
}
case '4':
{
    int index1, index2;
    cout << "Podaj indeks pierwszej liczby zespolonej: " << endl;
    cin >> index1;
    cout << "Podaj indeks drugiej liczby zespolonej: " << endl;
    cin >> index2;
    Vector[n] = new Zespolona(Vector[index1].dodaj(Vector[index1], Vector[index2]));
    n++;
    cout << "Suma liczb zespolonych zostala zapisana w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '5':
{
    int index1, index2;
    cout << "Podaj indeks pierwszej liczby zespolonej: " << endl;
    cin >> index1;
    cout << "Podaj indeks drugiej liczby zespolonej: " << endl;
    cin >> index2;
    Vector[n] = new Zespolona(Vector[index1].odejmij(Vector[index1], Vector[index2]));
    n++;
    cout << "Roznica liczb zespolonych zostala zapisana w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '6':
{
    int index1, index2;
    cout << "Podaj indeks pierwszej liczby zespolonej: " << endl;
    cin >> index1;
    cout << "Podaj indeks drugiej liczby zespolonej: " << endl;
    cin >> index2;
    Vector[n] = new Zespolona(Vector[index1].pomnoz(Vector[index1], Vector[index2]));
    n++;
    cout << "Iloczyn liczb zespolonych zostal zapisany w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '7':
{
    int index1, index2;
    cout << "Podaj indeks pierwszej liczby zespolonej: " << endl;
    cin >> index1;
    cout << "Podaj indeks drugiej liczby zespolonej: " << endl;
    cin >> index2;
    Vector[n] = new Zespolona(Vector[index1].podziel(Vector[index1], Vector[index2]));
     n++;
    cout << "Iloczyn liczb zespolonych zostal zapisany w tablicy pod indeksem " << n - 1 << endl;
    break;
}
case '8':
    {
        break;
    }
}
}
