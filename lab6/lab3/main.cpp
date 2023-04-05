#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int wybierz;
    int liczba,x=-15,y=15;
    double liczba2,a=1.5,b=2.25;
    double liczba3,c=64.5;

        cout << "Wybierz liczbe:" << endl;
        cout << "1:" << endl;
        cout << "2:" << endl;
        cout << "3:" << endl;
        cin >> wybierz;

    switch (wybierz){

    case 1:
        liczba = x+ rand() % (y-x+1);
        cout << "wylosowana liczba to " << liczba << endl;
        break;

    case 2:
        liczba2= a+(double)rand()/RAND_MAX*(b-a);
        cout << "wylosowana liczba to " << liczba2 << endl;
        break;

    case 3:
        liczba3= (double)rand()/RAND_MAX *c;
        cout << "wylosowana liczba to " << liczba3 << endl;
        break;

    default:
        cout << "blad w podaniu";
        break;

    }
    return 0;
}
