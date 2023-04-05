#include <iostream>

using namespace std;
int funkcja(int tab,int n)
{
int i,poczatek;
float avg,arytmetyczna=0;
    cout <<"srednia arytmetyczna" << endl;
    cin >> arytmetyczna;
for (i=1;i<n;i++){
    arytmetyczna = arytmetyczna+i;
    }
    avg = arytmetyczna/i;
     cout << "wynik to " << avg << endl;
}


int main()
{
int n=0;
int tab;
    cout << "ile tablic" << endl;
    cin >> n;

    funkcja(tab,n);


    return 0;
}
