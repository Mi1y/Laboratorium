#include <iostream>

using namespace std;
float a;
float b;
float P;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Oblicz pole prostokąta" << endl;
    cout << "Podaj długość prostokąta" << endl;
    cin >> a;
    cout << "Podaj szerokość prostokąta" << endl;
    cin >> b;
    P= a*b;
    cout << "Pole prostokąta wynosi: " << P;
    return 0;
}
