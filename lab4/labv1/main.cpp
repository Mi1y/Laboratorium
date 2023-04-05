#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    int wynik = suma(a,b);
    cout << "podaj cyfre a i b" << endl;
    cin >> a >> b;
    cout << "Wynik to: "<< suma(a,b) << endl;

    return 0;
}
