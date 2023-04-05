#include <iostream>

using namespace std;

int n;
bool falsztrue;

int main()
{
    cout << "Podaj liczbe n" << endl;
    cin >> n;


        falsztrue = !n;
        cout << "Twoja liczba to:" << falsztrue << endl;

        falsztrue = !(n>=200);
        cout << "Twoja liczba to:" << falsztrue << endl;

         falsztrue = !(n<=1);
        cout << "Twoja liczba to:" << falsztrue << endl;

    return 0;
}
