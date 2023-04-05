#include <iostream>

using namespace std;

int c(int k)
{
int n;
     if (k==0)
        return n;

    else if (k&2==0)
        return (c(k-1))/2;

    else if (k&2==1)
        return 3*c(k-1)+1;
}


int main()
{
    int k,n;
    cout << "Podaj liczbe k i n" << endl;
    cin >> k;
    cin >>n;
    cout << "Wynik to " << c(k) << endl;
    return 0;
}
