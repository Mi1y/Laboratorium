#include <iostream>
#include <math.h>
using namespace std;
float x;
float y;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Program wyznaczaj�cy warto�� funkcji kwadratowej" << endl;
    cout << "Podaj liczb� x" << endl;
    cin >> x;
    y = 2 * pow(x,2) + 2 * x - 3;
    cout << "Warto�� funkcji kwadratowej wynosi: " << y;
    return 0;
}
