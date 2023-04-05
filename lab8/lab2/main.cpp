#include <iostream>

using namespace std;

void dlugosc(){

string napis;
cout << "Podaj napis" << endl;
cin >> napis;
    int dlugosc= napis.length();
    if (napis[dlugosc-1]=='a')
        cout << " \" " << napis << " \" "<< endl;
    else
        cout << "nie ma litery a" << endl;
}


int main()
{
    dlugosc();
    return 0;
}
