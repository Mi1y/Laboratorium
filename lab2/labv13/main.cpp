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
    cout << "Prostok¹t > Wpisz 2" << endl;
    cout << "Trójk¹t > Wpisz 3" << endl;
    cout << "Romb > Wpisz 4" << endl;
    cout << "Równoleg³obok > Wpisz 5" << "\n" << endl;

    cout << "Wybierz 6 jezeli chcesz zakonczyc program" << "\n" << endl;
    cin >> wybor;


    switch (wybor){
        case '1':
        cout << "Podaj d³ugoœæ boku" << endl;
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
        cout << "Prostok¹t wynosi: " << prostokat<< "\n" << endl;
    continue;

        case '3':
        cout << "Podaj podstawê trójk¹ta" << endl;
        cin >> a;
        cout << "Podaj wysokoœæ trójk¹ta" << endl;
        cin >> h;
        trojkat= (a*h)/2;
        cout << "Trójk¹t wynosi: " << trojkat << "\n" << endl;
    continue;

        case '4':
        cout << "Podaj d³ugoœæ boku" << endl;
        cin >> a;
        cout << "Podaj wysokoœæ" << endl;
        cin >> h;
        romb = a*h;
        cout << "Romb wynosi: " << romb << "\n" << endl;
    continue;

        case '5':
        cout << "Podaj d³ugoœæ boku" << endl;
        cin >> a;
        cout << "Podaj wysokoœæ" << endl;
        cin >> h;
        rownoleglobok = a*h;
        cout << "Równoleg³obok wynosi: " << rownoleglobok << "\n" << endl;
    continue;
case '6':
    return 0;
        }
}
    return 0;
}
