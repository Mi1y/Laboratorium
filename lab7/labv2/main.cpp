#include <iostream>


using namespace std;

int funkcja(int tab, int n)
{

float i,suma=0, dodawanie=0;

    cout << "bazowa liczba" << endl;
    cin >> suma;
    cout << "dodawanie" << endl;
  cin >> dodawanie;

for (i=0;i<n;i++) {
    suma = suma + dodawanie;
    cout << suma << endl;
    }
}

int main()
{
int n=0;
int tab,suma,dodawanie;
    cout << "liczba tablic" << endl;
    cin >> n;
    funkcja(tab, n);


    return 0;
}
