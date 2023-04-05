#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void Usuwaniespacji(string tekst){

tekst.erase(remove_if(tekst.begin(),tekst.end(), ::isspace), tekst.end());
cout <<"po usunieciu spacji: " << tekst << endl;
}
int main()
{
    string tekst = "hello world";
    Usuwaniespacji(tekst);

 return 0;
}
