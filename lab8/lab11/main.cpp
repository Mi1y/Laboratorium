#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int Symetria(string tekst){
    int n = tekst.length();
    if (n<2)
        return -1;
    if (tekst[0]==tekst[n-1])
        return 1;
    else
        return 0;
}
int main()
{
string tekst;
    tekst = "ABBA";
    int sprawdzam = Symetria(tekst);

    if (sprawdzam == -1){
        cout <<"blad" << endl;
    }
    else if (sprawdzam ==1){
        cout <<"Symetryczny" << endl;
    }
    else
        cout <<"Nie jest symetryczny"<< endl;


 return 0;
}
