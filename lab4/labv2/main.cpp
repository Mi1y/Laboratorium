#include <iostream>

using namespace std;

int liczbacalkowita()
{
    int i=0;
    int a;
    cout << "podaj liczbe" << endl;
    cin >> a;
    while(a!=0){
    a = a/10;
    i++;
}
    cout << i;
}
int main()
{
    liczbacalkowita();
    return 0;
}
