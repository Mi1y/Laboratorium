#include <iostream>

using namespace std;
int n, suma=0;

int main()
{
    cout << "Podaj liczbe n do dzielenia przez 5" << endl;
    cin >>n;
    do
    {
        suma= n/5;
        cout << "\n" << suma;
    }   while (n<0);
    return 0;
}
