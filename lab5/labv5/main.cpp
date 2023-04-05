#include <iostream>

using namespace std;

int silnia(int x)
{
    if (x==0)
        return 0;
    else
        //cout << x << " " ;
        return x%10 + silnia(x/10);
}


int main()
{
    int x;
    cout << "Podaj liczbe" << endl;
    cin >> x;
    cout << silnia(x) << " " << endl;
    return 0;
}
