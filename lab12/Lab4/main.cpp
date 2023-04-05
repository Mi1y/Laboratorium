#include <iostream>
#include <fstream>
using namespace std;

const int Komputery = 25;

class Komputer {
public:
    string nazwa;
    double cena;
};

int main() {
    Komputer komputer[Komputery];
    int liczbakomputery = 0;

    char polecenie;
    while (true) {
        cout << "Wpisz komende: " << endl;
        cout << "R = wczytanie liczby komputerow i tablicy obiektow opisujacych komputery z pliku dyskowego" << endl;
        cout << "N = wczytanie danych opisujacych komputer i wprowadzenie ich do kolejnej pozycji tablicy obiektow" << endl;
        cout << "W = wyswietlanie informacji o wszystkich komputerach" << endl;
        cout << "Z = zapis liczby komputerow i tabeli obiektow do pliku dyskowego" << endl;
        cout << "K = zakonczenie program" << endl;
        cin >> polecenie;

        if (polecenie == 'R') {
            string nazwaplik;
            cout << "Wpisz nazwe plikow: ";
            cin >> nazwaplik;

            ifstream plik(nazwaplik);
            plik >> liczbakomputery;
            for (int i = 0; i < liczbakomputery; i++) {
                plik >> komputer[i].nazwa >> komputer[i].cena;
            }
        } else if (polecenie == 'N') {
            if (liczbakomputery == Komputery) {
                cout << "Nie mozna dodac wiecej komputerow, poniewaz przekroczylismy liczby komputerow." << endl;
            } else {
                cout << "Wpisz nazwe komputera: " << endl;
                cin >> komputer[liczbakomputery].nazwa;
                cout << "Wpisz cene komputera: " << endl;
                cin >> komputer[liczbakomputery].cena;
                liczbakomputery++;
            }
        } else if (polecenie == 'W') {
            for (int i = 0; i < liczbakomputery; i++) {
                cout << "Komputer " << i+1 << ": " << komputer[i].nazwa << ", " << komputer[i].cena << endl;
            }
        } else if (polecenie == 'Z') {
            string nazwaplik;
            cout << "Wpisz nazwe plikow: " << endl;
            cin >> nazwaplik;

            ofstream plik(nazwaplik);
            plik << liczbakomputery << endl;
            for (int i = 0; i < liczbakomputery; i++) {
                plik << komputer[i].nazwa << " " << komputer[i].cena << endl;
            }
        } else if (polecenie == 'K') {
            break;
        } else {
            cout << "Nieznane polecenie, proszê wpisaæ jeszcze raz!" << endl;
        }
    }

    return 0;
}
