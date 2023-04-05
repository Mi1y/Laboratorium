#include <iostream>
#include <math.h>
using namespace std;
float x;
float y;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Program wyznaczaj¹cy wartoœæ funkcji kwadratowej" << endl;
    cout << "Podaj liczbê x" << endl;
    cin >> x;
    y = 2 * pow(x,2) + 2 * x - 3;
    cout << "Wartoœæ funkcji kwadratowej wynosi: " << y;
    return 0;
}
