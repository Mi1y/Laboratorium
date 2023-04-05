#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
int a=0;
int b=0;

void Porownajilosci(string tekst){
    for (int i=0;i<=tekst.length();i++){
    if (tekst[i] >= 'a' && tekst[i] <= 'z')
        a++;
    if (tekst[i] >= 'A' && tekst[i] <= 'Z')
        b++;
    }

    cout << "mala litera: " << a << endl;
    cout << "duza litera: " << b << endl;

}
int main()
{
    string tekst = "Ala ma Kota";
    cout << tekst << endl;
    Porownajilosci(tekst);
    return 0;
}
