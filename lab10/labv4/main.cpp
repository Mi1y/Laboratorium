#include <iostream>

using namespace std;
int funkcja ()
{
int i,j;
 int wymiar=2;
 cout<<"Liczba wymiarow: " << wymiar << endl;
 int kolumn=4;
 cout<<"Liczba kolumn: " << kolumn << endl;
int sum;
 int **tab = new int *[wymiar];
    for ( i = 0; i < wymiar; ++i )
    {
    tab[i] = new int [kolumn];
    for ( j = 0; j < kolumn; ++j)
    tab[i][j]=i+j;
    }

        for ( int i = 0; i < wymiar; ++i, cout<<endl )
            for ( int j = 0; j < kolumn; ++j)
            cout<<tab[i][j]<<'\t';

    cout <<"Suma wartosc elementow tablicy wynosi : " << wymiar*kolumn << endl;
}
int main()
{

    int n,m;
    funkcja();
    return 0;
}
