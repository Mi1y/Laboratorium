#include <iostream>


using namespace std;

int funkcja(int tab, int n)
{
int i;
float suma=0, dodawanie=0;

    cout << "bazowa liczba" << endl;
    cin >> suma;
    cout << "dodawanie" << endl;
  cin >> dodawanie;

for (i=0;i<n;i++) {
    if (i%2==0){
    suma = suma + dodawanie;
    cout <<"wynik to " << suma << endl;
    }
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
