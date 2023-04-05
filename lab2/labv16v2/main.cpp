#include <iostream>
#include <string>
#include <vector>
using namespace std;

string english(int cyfry);

vector<string> dziewiec {"","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

string konwersja (int cyfra){
    if (cyfra<10)
        return dziewiec[cyfra];
}
int main()
{
    int wpisz,wpiszdrugi;
    cout << "Wpisz jedna cyfre ";
    cin >> wpisz;
    cout << "Wpisz jeszcze raz jedna cyfre ";
    cin >>wpiszdrugi;
    cout << konwersja(wpisz) << " " << konwersja(wpiszdrugi);

    return 0;
}
