#include <iostream>

using namespace std;

int n;
int a;

int main()
{
    cout << "Podaj liczbe n"<< endl;
    cin >> n;
    cout << "Podaj liczbe a"<< endl;
    cin >> a;
    do
    {   if (n<a)
            a= a-n;
        else
        n = n-a;
    }
    while (n !=a);


    cout << "Dzielnik to " << n;
    return 0;
}
