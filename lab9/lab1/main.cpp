#include <iostream>

using namespace std;
int a=100;
int wynik;

int main()
{
    int *wa;
    wa=&a;
    cout << "a wynosi : " << a << endl;
    cout << "wskaznik 1 wynosi: " << *wa << endl;

    a=200;
    wa=&a;
    wynik =*wa*a;
    cout << "wskaznik 1 wynosi: " << *wa << endl;
    cout << "wynik: " << wynik << endl;
    return 0;
}
