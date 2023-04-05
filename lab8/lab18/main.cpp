#include <iostream>
using namespace std;

void odwrocTekst(string& tekst)
{
    int n = tekst.length();

    for (int i = 0; i < n / 2; i++)
        swap(tekst[i], tekst[n - i - 1]);
}

int main()
{
    string tekst = "Hello World";
    cout << tekst << endl;
    odwrocTekst(tekst);
    cout << tekst;
    return 0;
}
