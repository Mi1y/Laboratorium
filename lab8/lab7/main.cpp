#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define ROZMIAR 26

void Liczymyliter(string tekst){
int n = tekst.size();
int fr[ROZMIAR];
memset(fr,0,sizeof(fr));
for (int i=0; i<n; i++)
    fr[tekst[i]-'a']++;

    for (int i=0;i<n;i++){
        if (fr[tekst[i]- 'a']!=0){
            cout << tekst[i]<< fr[tekst[i]-'a']<< " ";
            fr[tekst[i]-'a']=0;
        }
    }
}
//tekst.erase(remove(tekst.begin(),tekst.end(), '-'), tekst.end());
int main()
{
    string tekst = "hello world";
    Liczymyliter(tekst);

 return 0;
}
