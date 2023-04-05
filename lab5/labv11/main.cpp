#include <iostream>

using namespace std;

int ciag(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    else
        return ciag(0)+ciag(1)+ciag(n-1)+n;
}


int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cout << n << " " << ciag(n) << " " << endl;
    return 0;
}
