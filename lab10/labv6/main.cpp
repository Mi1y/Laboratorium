#include <iostream>

using namespace std;
int funkcja ()
{
double *tab[10];
double a=1024.5;
int i;
double sum;
 tab[0]=&a;
cout <<*tab[0];

tab[1] = new double [i];
for (i=0; i<3; i++)
    tab[1][i]=100.5;
    for (i=0; i<2;i++)
    cout << " \t" <<tab[1][i];
    sum=tab[1][2]*2;
    cout << " \t" << sum;
    delete(tab[1]);
}
int main()
{
    funkcja();
}

