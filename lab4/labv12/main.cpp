#include <iostream>

using namespace std;

int polepowierzchniprostopadloscian()
{
float a,b,c,pc;

cout << "Podaj dlugosc" << endl;
cin >> a;
cout << "Podaj szerokosc" << endl;
cin >> b;
cout << "Podaj wysokosc" << endl;
cin >> c;

    pc=2*((a*b)+(a*c)+(b*c));
cout << "Pole powierzchni prostopadloscianu wynosi: " << pc;
}
int main()
{
    polepowierzchniprostopadloscian();
    return 0;
}
