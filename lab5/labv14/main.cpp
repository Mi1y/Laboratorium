#include <iostream>

using namespace std;

int potegowanie (int x, int n)
{

    if (n==0)
        return 1;
    else
        return x*potegowanie(x,n-1);
}
int main()
{
int x,n;
    cout << "Podaj liczbe x i n " << endl;
    cin >> x;
    cin >> n;
    cout << "wynik to: " << potegowanie(x,n);
    return 0;
}
