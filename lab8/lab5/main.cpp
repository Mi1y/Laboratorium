#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void UsunPierwszyMinus(string tekst){
/*for (int i=0;i<=1;i++){
    if (tekst[i]>='a' && tekst[i] <= 'z') {
            tekst[i]=' ';
    }
}
cout << tekst;
}
*/
char ch = '-';
if (tekst.front()== ch){
    tekst.erase(tekst.begin());
}
//tekst.erase(remove(tekst.begin(),tekst.end(), '-'), tekst.end());
cout << "Kasujemy pierwszy minusy: " << tekst;
}
int main()
{
    string tekst = "--Ala ma Kota";
    cout << tekst << endl;
    UsunPierwszyMinus(tekst);

    return 0;
}
