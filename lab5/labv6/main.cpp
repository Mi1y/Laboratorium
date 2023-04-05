#include <iostream>

using namespace std;

int ciag(int n)
{
    if (n==1)
        return 1;
    else
        //cout << n << " ";
        return -ciag(n-1)*(n+2);
}


int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cout << n << " " << ciag(n) << " " << endl;
    return 0;
}
