#include <iostream>

using namespace std;
float kilogram;
float funty;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Program przeliczaj�cy kilogram na funty" << endl;
    cout << "Podaj ile kg mamy przelicza� na funty" << endl;
    cin >> kilogram;
    funty = kilogram * 2.20;
    cout << "Funty: " << funty;


    return 0;
}
