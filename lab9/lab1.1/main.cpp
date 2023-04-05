#include <iostream>

using namespace std;

int a=100;
int wynik;

int main()
{
    int *wa1, *wa2;
    wa1=&a;
    wa2=wa1;
    cout << "a wynosi : " << a << endl;
    cout << "wskaznik 1 wynosi: " << *wa1 << endl;
    cout << "wskaznik 2 wynosi: " << *wa2 << endl;

    a=200;
    wa1=&a;
    wa2=wa1;
    wynik =*wa1**wa2;
    cout << "a wynosi: " << a << endl;
    cout << "wa1 wynosi: " << *wa1 << endl;
    cout << "wa2 wynosi: " << *wa2 << endl;
    cout << "wynik: " << wynik << endl;

    return 0;
}
