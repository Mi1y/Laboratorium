#include <iostream>

using namespace std;

int N(int b)
{
     if (b==0)
        return 0;

    else if (b==1)
        return 6;

    else
        return 3+N(b-1);
}


int main()
{
    int b;
    cout << "Podaj liczbe" << endl;
    cin >> b;
    cout << "Wynik to " << N(b) << endl;
    return 0;
}
