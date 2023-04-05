#include <iostream>

using namespace std;
float a;
float b;
float P;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Oblicz pole prostok¹ta" << endl;
    cout << "Podaj d³ugoœæ prostok¹ta" << endl;
    cin >> a;
    cout << "Podaj szerokoœæ prostok¹ta" << endl;
    cin >> b;
    P= a*b;
    cout << "Pole prostok¹ta wynosi: " << P;
    return 0;
}
