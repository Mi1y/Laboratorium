#include <iostream>
#include <math.h>
using namespace std;
 float a, b, h;
 float kwadrat, prostokat, trojkat, romb, rownoleglobok;
 char wybor;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    for (;;) {
    cout << "Wybierz co bys chcial policzyc" << endl;
    cout << "Kwadrat > Wpisz 1" << endl;
    cout << "Prostok�t > Wpisz 2" << endl;
    cout << "Tr�jk�t > Wpisz 3" << endl;
    cout << "Romb > Wpisz 4" << endl;
    cout << "R�wnoleg�obok > Wpisz 5" << "\n" << endl;

    cout << "Wybierz 6 jezeli chcesz zakonczyc program" << "\n" << endl;
    cin >> wybor;


    switch (wybor){
        case '1':
        cout << "Podaj d�ugo�� boku" << endl;
        cin >> a;
        kwadrat= pow(a,2);
        cout << "Kwadrat wynosi: " << kwadrat << "\n" << endl;
    continue;

        case '2':
        cout << "Podaj pierwszy bok" << endl;
        cin >> a;
        cout << "Podaj drugi bok" << endl;
        cin >> b;
        prostokat= a * b;
        cout << "Prostok�t wynosi: " << prostokat<< "\n" << endl;
    continue;

        case '3':
        cout << "Podaj podstaw� tr�jk�ta" << endl;
        cin >> a;
        cout << "Podaj wysoko�� tr�jk�ta" << endl;
        cin >> h;
        trojkat= (a*h)/2;
        cout << "Tr�jk�t wynosi: " << trojkat << "\n" << endl;
    continue;

        case '4':
        cout << "Podaj d�ugo�� boku" << endl;
        cin >> a;
        cout << "Podaj wysoko��" << endl;
        cin >> h;
        romb = a*h;
        cout << "Romb wynosi: " << romb << "\n" << endl;
    continue;

        case '5':
        cout << "Podaj d�ugo�� boku" << endl;
        cin >> a;
        cout << "Podaj wysoko��" << endl;
        cin >> h;
        rownoleglobok = a*h;
        cout << "R�wnoleg�obok wynosi: " << rownoleglobok << "\n" << endl;
    continue;
case '6':
    return 0;
        }
}
    return 0;
}
