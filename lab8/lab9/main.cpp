#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void Usuwanielancuchtekstu(string tekst){

tekst.erase(4,5);
cout <<"po usunieciu od pocz do kon: " << tekst << endl;
}
int main()
{
    string tekst = "poczatek konca";
    Usuwanielancuchtekstu(tekst);

 return 0;
}
