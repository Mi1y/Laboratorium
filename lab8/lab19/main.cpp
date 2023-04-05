#include <iostream>
#include <cstring>
using namespace std;

bool Pal(char tekst[], int s, int e)
{

    if (s == e)
    return true;

    if (tekst[s] != tekst[e])
    return false;

    if (s < e + 1)
    return Pal(tekst, s + 1, e - 1);

    return true;
}

bool Palindrom(char tekst[])
{
    int n = strlen(tekst);

    if (n == 0)
        return true;

    return Pal(tekst, 0, n - 1);
}

int main()
{
    char tekst[] = "HeeH";
    cout << tekst << endl;
    if (Palindrom(tekst))
    cout << "Tak";
    else
    cout << "Nie";

    return 0;
}
