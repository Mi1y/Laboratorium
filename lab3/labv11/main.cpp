#include <iostream>

using namespace std;
double p,w,i;

//double wynik;

int main()
{
    cout << "podaj liczbe p" << endl;
    cin >> p;
    cout << "podaj liczbe do potegi" << endl;
    cin >> w;
/*
    for (i=0; i<w; i++)
        wynik= p*p;
    cout <<"wynik to: " << wynik;
*/

        for (i=0; i<w; i++){
        p*= p;
        }

        cout <<"wynik to: " << p;

    return 0;
}
