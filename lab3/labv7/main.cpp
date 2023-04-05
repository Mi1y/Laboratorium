#include <iostream>
#include <cmath>
using namespace std;

int a,b,c,d;
int x;
int wynik;

int main()
{

    cout << "Wpisz cyfre do a,b,c,d" << endl;
    cin >> a >> b >> c >> d;
    a=abs(a);
/*
    wynik=a*pow(x,2)+b*x+c;

  if (wynik < d)
    ++x;
       else (wynik > d);
    cout << "Wynik to: " << wynik;
*/


do {
     wynik=a*pow(x,2)+b*x+c;
     ++x;
}
    while (wynik < d);

    cout << "X wynosi: " << x << endl;

    cout << "Wynik to: " << wynik;


    return 0;
}
