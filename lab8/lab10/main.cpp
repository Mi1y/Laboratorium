#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void Przedluzanie(string tekst){
    int dlugosc=10;

    for (int i = 0; i < dlugosc; i++)
        tekst = tekst + "_";

    cout << tekst;
}
int main()
{
    string tekst = "Hello";
    Przedluzanie(tekst);

 return 0;
}
