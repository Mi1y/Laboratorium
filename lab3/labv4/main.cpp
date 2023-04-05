#include <iostream>
#include <cmath>
using namespace std;

int n,i;
int a=0;
int b=1;
//int wynik;


int main()
{
    cin >> n;
    /*
    a = n-1;
    b = pow(n,2);
    wynik = b-a;
    */

    for (i=0;i<=n;i++){
    b= a+b;
    a = b-a;
    }
    cout << n << " Twoja liczba to: " << a << endl;
    return 0;
}
