#include <iostream>

using namespace std;
float a,b,c,a2,b2,c2,dzielnik,szukaniex,szukaniey,x,y;
int main()
{
    cout << "Podaj pierwszy wyznacznik" <<endl ;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Podaj drugi wyznacznik" << endl;
    cin >> a2;
    cin >> b2;
    cin >> c2;

    dzielnik = a*b2 - b*a2;
    szukaniex = c*b2 - b*c2;
    szukaniey = a*c2 - c*a2;

    if (dzielnik != 0){
        x = szukaniex/dzielnik;
        y = szukaniey/dzielnik;
        cout << "x wynosi: " << x << " y wynosi: " << y;
       } else if (szukaniex == 0 && szukaniey ==0) {
            cout << "Ma nieskonczenie wiele rozwiazan";
       }
        else {
            cout << "Nie ma rozwiazan"; }
}
