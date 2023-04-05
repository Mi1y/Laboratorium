#include <iostream>

using namespace std;

int main()
{
    int a,b,n,wynik,sum,i;
    cout << "Podaj liczbe a" << endl;
    cin >> a;
    cout << "Podaj liczbe b" << endl;
    cin >> b;
    cout << "Wybierz ktory chcesz dzielic: 3 lub 5" << endl;
    cin >> n;
    switch (n){
        case(3):
        sum=(b+n)/3-(a+n-1)/3;
                for (i=0;i<sum;i++){
                    wynik+=sum-4;
                cout << wynik+3 << endl;
                }
        break;

        case (5):
        sum=(b+n)/5-(a+n-1)/5;
                for (i=0;i<sum;i++){
                   wynik+=sum;
                cout << wynik << endl;
                }
        break;

default:
    cout << "Error 404"<< endl;
    }
}


//cout << (b+n)/3-(a+n-1)/3 <<endl;     (do case 3)
//cout<<(b+n)/5-(a+n-1)/5<<endl;        (do case 5)
