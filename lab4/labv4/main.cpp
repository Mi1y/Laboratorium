#include <iostream>

using namespace std;

int wyznaczaniesumy()
{
    int a, reszta, suma=0;
    cout <<  "Podaj liczbe: " << endl;
    cin >> a;

    while (a>0)
    {
        reszta=a%10;
        suma=suma+reszta;
        a=a/10;
    }
    cout << "suma wynosi: " << suma;

}


int main()
{
    wyznaczaniesumy();
    return 0;
}
