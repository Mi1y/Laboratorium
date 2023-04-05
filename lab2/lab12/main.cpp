#include <iostream>
#include <iomanip>
using namespace std;
 float mil, celsjusz, kilogram, litr, km;
 float kilometr, fahrenheit, funt, galon, m;
 char wybor;


int main()
{
    cout<<fixed;
    cout<<setprecision(3)<< kilometr, fahrenheit, funt, galon, m;

    for (;;) {
    cout << "Wybierz co bys chcial policzyc" << endl;
    cout << "Mil na kilometr > Wpisz 1" << endl;
    cout << "Celsjusz na Fahrenheit > Wpisz 2" << endl;
    cout << "kilogram na funt > Wpisz 3" << endl;
    cout << "litr na galon > Wpisz 4" << endl;
    cout << "km/s na m/s > Wpisz 5" << "\n" << endl;

    cout << "Wybierz 6 jezeli chcesz zakonczyc program" << "\n" << endl;
    cin >> wybor;


    switch (wybor){
        case '1':
        cout << "Podaj mil" << endl;
        cin >> mil;
        kilometr= mil *1.609344;
        cout << "Kilometr wynosi: " << kilometr << "\n" << endl;
    continue;

        case '2':
        cout << "Podaj mil" << endl;
        cin >> celsjusz;
        fahrenheit= (celsjusz*9)/5+32;
        cout << "Fahrenheit wynosi: " << fahrenheit << "\n" << endl;
    continue;

        case '3':
        cout << "Podaj kilogram" << endl;
        cin >> kilogram;
        funt= kilogram *2.4419;
        cout << "Funt wynosi: " << funt << "\n" << endl;
    continue;

        case '4':
        cout << "Podaj litr" << endl;
        cin >> litr;
        galon = litr *0.2641722;
        cout << "Galon wynosi: " << galon << "\n" << endl;
    continue;

        case '5':
        cout << "Podaj km/s" << endl;
        cin >> km;
        m= km *1000;
        cout << "M/s wynosi: " << m << "\n" << endl;
    continue;

case '6':
    return 0;
        }
}
    return 0;
}

