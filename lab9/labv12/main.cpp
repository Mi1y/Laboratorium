#include <iostream>

using namespace std;

int bezargumenty()
{
    double tablica[0];
    double x, *wskaznik;
    tablica[0] = 10.5;

    wskaznik=&tablica[0];
    x=*wskaznik;
    cout << x << endl;

}

int main()
{
    bezargumenty();
    return 0;
}
