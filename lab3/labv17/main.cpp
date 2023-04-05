#include <iostream>

using namespace std;

int main()
{
    int a,b,n,sum,i,wynik;
    cout << "Podaj liczbe a" << endl;
    cin >> a;
    cout << "Podaj liczbe b" << endl;
    cin >> b;
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    sum=(b+n)/n-(a+n-1)/n;
    for (i=0;i<sum;i++){
        wynik+=n;
    cout << wynik-16 <<endl;
    }
    return 0;
}
