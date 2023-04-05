#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void Usunmalalitere(string tekst){
for (int i=0;i<=1;i++){
if (tekst[i]>='a' && tekst[i]<='z') {
   // tekst.erase(tekst.begin());
    tekst[i]=' ';

}
//tekst.erase(remove(tekst.begin(),tekst.end(), '-'), tekst.end());
}
cout << "Kasujemy pierwsza litere: " << tekst;
}
int main()
{
    string tekst;
    cin >> tekst;
    Usunmalalitere(tekst);

    return 0;
}
