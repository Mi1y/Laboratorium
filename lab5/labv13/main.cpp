#include <iostream>

using namespace std;



int ciag(int n, int policz, int wynik)
{
    if ((n==policz && wynik == wynik) || (n !=policz && n <=9 && wynik == wynik)) {
        return wynik;
    }
    if (n <=9){
        return 0;
    }
    if (n%10==n) {
        return ciag(n/10, policz, ++wynik);
    } else {
        return ciag(n/10, policz, wynik);
        }
}

int main()
{
int n;
    //cout << "podaj liczbe" << endl;
   // cin >> n;
    cout << "wynik " << ciag(1024,2,1) << endl;
    cout << "wynik " << ciag(515,5,2) << endl;
    cout << "wynik " << ciag(665,3,0) << endl;
    return 0;
}
