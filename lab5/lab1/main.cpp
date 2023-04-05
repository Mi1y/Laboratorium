#include <iostream>

using namespace std;
int a;


int silnia (int a)
{
    if (a==0)
        return 1;
    else
        return silnia(a-1)*a;
}

int main()
{
    cout << "Podaj liczbe do silnii" << endl;
    cin >> a;
    cout << "silnia " << a << " wynosi: " << silnia(a);
    return 0;
}
