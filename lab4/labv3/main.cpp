#include <iostream>

using namespace std;

int wyznaczaniemaksimum(int a,int b){
    max(a,b);
}
int main()
{
    int a,b;

    cout << "Podaj liczbe a i b" << endl;
    cin >> a >> b;

    cout << "Liczba maksymalna wynosi: " << max(a,b);
    return 0;
}
