#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int i,k=0,wybierz;
    double losowe,liczba,c;
    int counter=0;
        cout << "Liczba rzeczywista wpisz nr 1" << endl;
        cout << "Liczba calkowita wpisz nr 2" << endl;
        cin >> wybierz;
        switch (wybierz){

    case 1:
            cout << "ile razy chcesz losowac" << endl;
            cin >> k;
            cout <<"Zakres: od 0 do ilu?" << endl;
            cin >> c;
            cout << "Strzelaj" << endl;
            for (i=0;i<k;i++){
            ++counter;
            cin >> liczba;
            losowe= (double)rand()/RAND_MAX *c;
            if (liczba==losowe)
                cout << "Udalo ci sie" << liczba << " za " << counter << endl;

            else if (i<k)
                cout <<"Wylosowana liczba to: " << losowe <<" Przykro mi, sprobuj jeszcze raz" << endl;
            }
            break;
    case 2:
        cout << "ile razy chcesz losowac" << endl;
            cin >> k;
            cout <<"Zakres: od 0 do ilu?" << endl;
            cin >> c;
            cout << "Strzelaj" << endl;
            for (i=0;i<k;i++){
            ++counter;
            cin >> liczba;
            losowe= rand() % 10;
            if (liczba==losowe)
                cout << "Udalo ci sie" << liczba << " za " << counter << endl;

            else if (i<k)
                cout <<"Wylosowana liczba to: " << losowe <<" Przykro mi, sprobuj jeszcze raz" << endl;
            }
            break;
    default:
        cout << "blad w podaniu";
        break;
}
    return 0;
}
