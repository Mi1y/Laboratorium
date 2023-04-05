#include <iostream>
#include <math.h>
using namespace std;
int funkcja(int tab,float n)
{
int i;
float avg,geometryczne=0;
    cout <<"srednia geometryczne" << endl;
    cin >> geometryczne;

for (i=1;i<n;i++){
    geometryczne = geometryczne*i;
    }

    avg = pow(geometryczne,1.0/i);
    cout << "wynik to " << avg << endl;
}


int main()
{
float n=0;
int tab;
    cout << "ile tablic" << endl;
    cin >> n;

    funkcja(tab,n);


    return 0;
}
