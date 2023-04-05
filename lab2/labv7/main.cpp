#include <iostream>

using namespace std;
float S;
float h;
float V;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Obliczenie objêtoœæ sto¿ka" << endl;
    cout << "Podaj pole podstawy sto¿ka" << endl;
    cin >> S;
    cout << "Podaj wysokoœæ sto¿ka" << endl;
    cin >> h;
    V= 1.0/3.0 * S * h;
    cout << "Objêtoœæ sto¿ka wynosi: " << V;
    return 0;
}
