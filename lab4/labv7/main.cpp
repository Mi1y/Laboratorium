#include <iostream>

using namespace std;

int dzielnik()
{
    int n,i;
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    for (i;i<n;i++){
    n=n/2;
    cout << n << endl;
    }
}

int main()
{
    dzielnik();
   // cout << dzielnik() << endl;
    return 0;
}
