
#include <iostream>


using namespace std;

int funkcja()
{
int n=0;
int i;
char tab[12]={'!','@','#','$','%','^','&','*','(',')','+','-'};
    cout << tab << endl;

    cout << "liczba tablic od 0 do 12" << endl;
    cin >> n;
for (i=0;i<n;i++) {
    cout << tab[i] << endl;
    }
}

int main()
{
    funkcja();


    return 0;
}

/*
#include <iostream>


using namespace std;

int funkcja(int tab, int n)
{

float i,wynik=0, dodawanie=0;

    cout << "bazowa liczba" << endl;
    cin >> wynik;
    cout << "dodawanie" << endl;
  cin >> dodawanie;

for (i=0;i<n;i++) {
    wynik = wynik + dodawanie;
    cout << wynik << endl;
    }
}

int main()
{
int n=0;
int tab,wynik,dodawanie;
    cout << "liczba tablic" << endl;
    cin >> n;
    funkcja(tab, n);


    return 0;
}






#include <iostream>

using namespace std;

int main()
{
   int rozmiar;
   int i;
   cout << "Podaj rozmiar tablicy: ";
   cin >> rozmiar;
   int tablica[rozmiar];
   for (i=0; i<rozmiar; i++);
       {
       for(i=0; i<rozmiar; i++)

           cout << tablica[i] << " ";
       }
               cout << "Liczba " << i+1 << " ";
               cin >> tablica[i];


   cout << "Wyswietlamy liczby!" << endl;
   for (i=0; i<rozmiar; i++)
       {
           cout << tablica[i] << " ";
       }
   return 0;
}

*/
