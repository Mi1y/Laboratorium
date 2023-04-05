#include <iostream>
#include <math.h>
using namespace std;
float r;
float P;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Obliczenie Pole ko³a" << endl;
    cout << "Podaj promieñ" << endl;
    cin >> r;
    P = M_PI *pow(r,2);
    cout << "Pole ko³o wynosi " << P;
    return 0;
}
