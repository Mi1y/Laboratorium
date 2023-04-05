#include <iostream>

using namespace std;
int a;
float b;
float c;
char temperatura;
float Celsjusz;
float Fahrenheit;

int main()
{
    setlocale(LC_CTYPE,"Polish");

    cout << "Program przeliczajacy temperature w stopniach Celsjusza na temperature w skali Fahrenheita lub na odwrot" << endl;
    cout << "Wpisz 1 jezeli chcesz przeliczyc na Fahrenheit" << endl;
    cout << "Wpisz 2 jezeli chcesz przeliczyc na Celsjusz" << endl;
    cin >> temperatura;
    switch (temperatura) {
        case '1':
    cout << "Podaj temperature stopni Celsjusza" << endl;
    cin >> b;
    Fahrenheit = (b*9)/5+32;
    cout << "Fahrenheit wynosi: " << Fahrenheit << endl;
        break;
    case '2':
    cout << "Podaj skale Fahrenheit" << endl;
    cin >> c;
    Celsjusz = (c-32)*5/9;
    cout << "Celsjusz wynosi: " << Celsjusz << endl;
    break;
    }
    return 0;
}
