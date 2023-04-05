#include <iostream>

using namespace std;

int tablica (int n, int m) {

    n=2;
    m=2;
    int i,j;

   int **tab=new int *[n];

   for (i=0;i<n;i++)
   {
    tab[i]=new int [m];
   for (j=0;j<m;j++)
    tab[i][j]=i+j;
   }

    for ( int i = 0; i < n; ++i,cout << endl)
            for ( int j = 0; j < m; ++j)
            cout<<tab[i][j]<<'\t';

}

int main()
{
    int n,m;
    tablica(n,m);
   return 0;
}
