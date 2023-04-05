#include <iostream>

using namespace std;



int ciag(int n)
{
    if (n==0 || n==1)
        return 1;

        else if (n%2==0)
        return ciag(n-1)+n;
         else
        return ciag(n-1)*1;

}

int main()
{
int n;
    cout << "podaj liczbe" << endl;
    cin >> n;
    cout << "Liczba " << n << " wynosi " << ciag(n) << endl;
    return 0;
}
