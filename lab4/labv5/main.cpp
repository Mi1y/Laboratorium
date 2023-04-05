#include <iostream>
#include <string>

using namespace std;

int parzyste (int a, int b)
{
    if (a%2==0)
        cout << "jest parzysta" << endl;
         //else if (b%2==0) {
           // cout << "jest parzysta"<< endl;
     else
        cout << "Nie jest parzysta" << endl;


            if (b%2==0)
                cout << "jest parzysta"<< endl;
                else
                cout << "Nie jest parzysta" << endl;
}

int main()
{
    int a,b;
    cout << "Podaj liczbe a i b" << endl;
    cin >> a >> b;
    return parzyste(a,b);
}
