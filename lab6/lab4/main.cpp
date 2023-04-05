#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;


int konwersja (long int a){
int dziesietny =0;
int b=0;
int reszta;
int i=0;
    while (i>100){
        i++;
        if (a!=0){
        reszta= a % 10;
        dziesietny += reszta * pow(2, b);
        ++b;
        a /= 10;
        }
    return dziesietny;
}
}

int main()
{
long int a;
int dec=konwersja(a);
    cout << "Zamien binarne na dziesietne" << endl;
    cout << "podaj 8 liczb binarnych 0 i 1" << endl;
    cin >> a;
    int start = time(0);
    cout << a << " binarny = " << dec << " dziesietny" << endl;
    int end = time(0);
return 0;
}

