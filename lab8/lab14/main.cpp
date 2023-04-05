#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void Usunznak(string tekst){


tekst.erase(remove(tekst.begin(),tekst.end(), 'a'), tekst.end());
cout << "Znak a usuwa: " << tekst;
}
int main()
{
    string tekst = "Ala ma Kota";
    cout << tekst << endl;
    Usunznak(tekst);

    return 0;
}

