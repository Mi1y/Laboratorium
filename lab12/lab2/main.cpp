#include <iostream>
#include <Windows.h>
#include <string>
#include <array>
#include <cstdio>
#include <iomanip>

using namespace std;

class Pracownik
{
	string nazwisko;
	double pensja;
	double premia;
public:
	Pracownik() {}
	Pracownik(string n, double x, double y) : nazwisko(n), pensja(x), premia(y) {}


	string get_nazwisko() const
	{
		return nazwisko;
	}
	double get_premia() const
	{
		return premia;
	}
	double get_pensja() const
	{
		return pensja;
	}

	void update_premia(double p)
	{
		premia = p;
	}
	void update_pensja(double p)
	{
		pensja = p;
	}
	double wyplata()
	{
		return pensja + pensja*(premia/100);
	}
};

class Spis
{
	array<Pracownik, 50> pracownicy;
	int n = 0;
public:
	Spis() {}
	void dodaj_pracownika()
	{
		if (n == 50)
		{
			cout << "Osiagnieto limit pracownikow." << endl;
			return;
		}
		string s;
		double x, y;
		cout << "Podaj nazwisko: ";
		cin >> s;
		cout << "Podaj pensje: ";
		cin >> x;
		cout << "Podaj procent premii: ";
		cin >> y;
		pracownicy[n] = Pracownik(s, x, y);
		n++;
	}
	void nowapremia()
	{
		string nazwisko;
		cout << "Podaj nazwisko: ";
		cin >> nazwisko;
		for (int i = 0; i < n; i++)
		{
			if (pracownicy[i].get_nazwisko() == nazwisko)
			{
				double new_premia;
				cout << "Podaj nowa wartosc premii: ";
				cin >> new_premia;
				pracownicy[i].update_premia(new_premia);
				return;
			}
		}
		cout << "Nie znaleziono osoby z danym nazwiskiem." << endl;
		return;
	}
	void nowapensja()
	{
		string nazwisko;
		cout << "Podaj nazwisko: ";
		cin >> nazwisko;
		for (auto& pracownik : pracownicy)
		{
			if (pracownik.get_nazwisko() == nazwisko)
			{
				double new_pensja;
				cout << "Podaj nowa wartosc pensji: ";
				cin >> new_pensja;
				pracownik.update_pensja(new_pensja);
				return;
			}
		}
		cout << "Nazwisko nie znaleziono" << endl;
		return;
	}
	double wszystkiewyplaty()
	{
		double wynik = 0;
		for (int i = 0; i < n; i++)
		{
			wynik += pracownicy[i].wyplata();
		}
		return wynik;
	}
	void wyswietlwyplaty()
	{
		cout << fixed << setprecision(2) << "Suma wszystkich wyplat dla pracownikow: " << wszystkiewyplaty() << endl;
	}

};


int main() {

	Spis spis;
	while (true)
	{

		int wybierz;
		cout << "Wybor: "<< endl;
		cout << "1. Dodaj pracownika " << endl;
		cout << "2. Zmien pensje pracownika " << endl;;
		cout << "3. Zmien % premi pracownika " << endl;
		cout << "4. Wyswietl kwote do zaplaty pracownikom "<< endl;
		cout << "5. Zakoncz program "<< endl;
		cin >> wybierz;

		if (wybierz == 5)
			break;
		switch (wybierz)
		{
		case 1:
			spis.dodaj_pracownika();
			break;
		case 2:
			spis.nowapensja();
			break;
		case 3:
			spis.nowapremia();
			break;
		case 4:
			spis.wyswietlwyplaty();
			break;
		default:
			break;
		}
		cout << "Wcisnij enter by kontynuowac";
		cin.ignore();
		getchar();
		system("cls");
	}


	return 0;
}
