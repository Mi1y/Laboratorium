#include <iostream>

using namespace std;
float kilogram;
float funty;

int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Program przeliczający kilogram na funty" << endl;
    cout << "Podaj ile kg mamy przeliczać na funty" << endl;
    cin >> kilogram;
    funty = kilogram * 2.20;
    cout << "Funty: " << funty;


    return 0;
}
