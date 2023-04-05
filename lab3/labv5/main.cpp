
#include <iostream>

using namespace std;

int n,m;
//int dzielnik;

int main()
{
    cout << "Podaj liczbe n"<< endl;
    cin >> n;
    cout << "Podaj liczbe m"<< endl;
    cin >> m;
    do
    {   if (n<m)
            m= m-n;
  else
        n = n-m;
    }
    while (n !=m);


//    dzielnik = (n+m)/2;
    cout << "Dzielnik to " << n;
    return 0;
}
