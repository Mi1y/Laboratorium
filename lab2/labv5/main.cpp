#include <iostream>
#include <math.h>
using namespace std;
float r;
float P;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Obliczenie Pole ko�a" << endl;
    cout << "Podaj promie�" << endl;
    cin >> r;
    P = M_PI *pow(r,2);
    cout << "Pole ko�o wynosi " << P;
    return 0;
}
