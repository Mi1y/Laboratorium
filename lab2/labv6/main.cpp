#include <iostream>

using namespace std;
float a;
float b;
float P;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Oblicz pole prostok�ta" << endl;
    cout << "Podaj d�ugo�� prostok�ta" << endl;
    cin >> a;
    cout << "Podaj szeroko�� prostok�ta" << endl;
    cin >> b;
    P= a*b;
    cout << "Pole prostok�ta wynosi: " << P;
    return 0;
}
