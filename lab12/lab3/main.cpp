#include<iostream>
using namespace std;
class Zespolona
{
private:
    double Im, Re;

public:
    Zespolona()
    {
        Im = 0.0;
        Re = 0.0;
    }

    Zespolona(double wartosc)
    {
        Im = wartosc;
        Re = wartosc;
    }
Zespolona(double Re, double Im){}
    Zespolona dodaj(Zespolona z1, Zespolona z2) {
        Zespolona wyn;
        wyn.Re = z1.Re + z2.Re;
        wyn.Im = z1.Im + z2.Im;
        return wyn;
    }
};


int main()
{
    Zespolona **Vector = new Zespolona*[100];

    int n = 0;
    int wybor;
    cout << "Wybierz polecenie: " << endl;
    cout << "1 (N): utworzenie liczby zespolonej " << endl;
    cout << "2 (W):  wyswietla wartosc liczby zespolonej o podanym indeksie zapisanej w tablicy " << endl;
    cout << "3 (+): Suma dwu liczb zespolonych " << endl;
    cout << "4 (-) : roznica dwu liczb zespolonych " << endl;
    cout << "5 (*) : obicza iloczyn dwu liczb " << endl;
    cout << "6 (/) : iloraz dwu liczb zespolonych " << endl;
    cout << "7: Koniec programu " << endl;
    cin >> wybor;
    switch (wybor) {

    case 1:
    {
        double im, re;
        cout << "Podaj wartosc rzeczywista liczby zespolonej: " << endl;
        cin >> re;
        cout << "Podaj wartosc urojona liczby zespolonej: " << endl;
        cin >> im;
        Zespolona *c = new Zespolona(re, im);
        *Vector[n] = *c;
        n++;
        cout << &c << endl;
        break;
    }
    case 2:
    {
        double wartosc;
        cout << "Podaj wartosc " << endl;
        cin >> wartosc;
        Zespolona *c1 = new Zespolona(wartosc);
        *Vector[n] = *c1;
        n++;
        break;
        cout << &c1 << endl;
    }

    case 3:
    {
        int index;
        cout << "Podaj index liczby: " << endl;
        cin >> index;
        //cout << Vector[0];
    }

    case 4:
    {
        Zespolona c1, c2;

    }
}
}
