#include <iostream>

using namespace std;

int bezargumenty()
{
    int tablica[0];
    int x, *wskaznik;
    tablica[0] = 10;

    wskaznik=&tablica[0];
    x=*wskaznik;
    cout << x << endl;

}

int main()
{
    bezargumenty();
    return 0;
}
