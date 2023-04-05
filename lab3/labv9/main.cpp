#include <iostream>
#include <cmath>
using namespace std;

int a,b,c;
int x;
int wynik;

int main()
{

    cout << "Wpisz cyfre do a,b,c" << endl;
    cin >> a >> b >> c;
    x=abs(x);

do {
     wynik= 5*pow(x,2)+a*x+b;
     ++x;
}
    while (wynik <= c);

    cout << "X wynosi: " << x << endl;

    cout << "Wynik to: " << wynik;


    return 0;
}

