#include <iostream>


using namespace std;

int funkcja(int tab, int n)
{

float i,suma=0, iloczyn=0;

    cout << "bazowa liczba" << endl;
    cin >> suma;
    cout << "iloczyn" << endl;
  cin >> iloczyn;

for (i=0;i<n;i++) {
    suma = suma * iloczyn;
    cout << suma << endl;
    }
}

int main()
{
int n=0;
int tab;
    cout << "liczba tablic" << endl;
    cin >> n;
    funkcja(tab, n);


    return 0;
}
