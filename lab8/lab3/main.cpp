#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;


void Usunmale(string tekst){
    for (int i=0;i<=tekst.length();i++){
    if (tekst[i]>='a' && tekst[i] <= 'z') {
            tekst[i]=' ';
    }
}
cout << tekst;
}

int main()
{
    string tekst = "Ala ma Kota";
    cout << tekst << endl;
    Usunmale(tekst);

    return 0;
}
