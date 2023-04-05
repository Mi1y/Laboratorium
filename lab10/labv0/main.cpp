#include <iostream>

using namespace std;

int main()
{
int wymiar,kolumn;

 cout<<"Liczba wierszy: ";
 cin>>wymiar;
 cout<<"Liczba kolumn: ";
 cin>>kolumn;

 int **tab = new int *[wymiar];
    for ( int i = 0; i < wymiar; ++i )
    {
    tab[i] = new int [kolumn];
    for ( int j = 0; j < kolumn; ++j)
    tab[i][j]=(i+j)+5;
    }

        for ( int i = 0; i < wymiar; ++i, cout<<endl )
            for ( int j = 0; j < kolumn; ++j)
            cout<<tab[i][j]<<'\t';

        for ( int i(0); i < wymiar; ++i )
        delete [] tab[i];
    delete [] tab;



    return 0;
}
/*
int main()
{
    int rozmiar;
    int **tablica = new int *[2];

tablica[0] = new int [2];
tablica[1] = new int [2];


cout << "Podaj pierwszy rozmiar tablicy:" << endl;
    cin >> rozmiar;
    tablica[0][0] = rozmiar;

cout << "Podaj drugi rozmiar tablicy:" << endl;
    cin >> rozmiar;
    tablica[1][1] = rozmiar;

        cout << "tablica dwuwymiarowa" << endl;
        cout << tablica[0][0] << endl;;
        cout << tablica[1][1] << endl;

delete [] tablica[0];
delete [] tablica[1];
delete [] tablica;

    return 0;
}
*/
/*
int main()
{
int wymiar,rozmiar, i;

//cout << "Podaj wymiar tablicy:" << endl;
//cin >> wymiar;

int ** tablica = new int *[wymiar];
cout << "Podaj wymiar tablicy:" << endl;
cin >> wymiar;
for (int i=0; i<wymiar; i++)
    tablica[i] = new int [wymiar];
    cout << "Podaj rozmiar tablicy:" << endl;
    cin >> rozmiar;
    tablica[i][i] = rozmiar;
    cout <<  tablica[i][i] << endl;

for (int i=0; i<wymiar; i++)

    delete [] tablica[i];


delete [] tablica;

    return 0;
}
*/
