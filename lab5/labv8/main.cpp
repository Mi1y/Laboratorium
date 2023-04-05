#include <iostream>

using namespace std;

int ciag(int n)
{
    if (n==0)
        return 1;
    else
        //cout << n << " ";
        return 2*ciag(n-1)+5;
}


int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cout << n << " " << ciag(n) << " " << endl;
    return 0;
}
