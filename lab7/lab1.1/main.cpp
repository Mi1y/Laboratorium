#include <iostream>


using namespace std;

int funkcja(int tab, int n)
{
int i;
float suma;
    cout << "bazowa liczba" << endl;
    cin >> suma;
for (i=0;i<n;i++) {
    suma = suma * 2;
    cout << suma << endl;
    }
}

int main()
{
int tab;
int n=0;
    cout << "ile tablic" << endl;
    cin >> n;
    funkcja(tab, n);
    return 0;
}
