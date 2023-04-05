#include <iostream>

using namespace std;

int ciag(int n)
{
    if (n==1)
        return 0.75;
    if (n==2)
        return -1;
    else
        //cout << n << " ";
        return 2 * ciag(n-1)* 0.5 - ciag(n-2);
}


int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cout << n << " " << ciag(n) << " " << endl;
    return 0;
}
