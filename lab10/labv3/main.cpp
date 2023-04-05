#include <iostream>

using namespace std;

int tablica (int n, int m, int k) {

    n=3;
    m=3;
    k=3;
    int i,j,r;

   int **tab=new int *[n];

   for (i=0;i<n;i++)
   {

    tab[i]=new int [k];
    for (r=0;r<k;r++)

    tab[i]=new int [m];
   for (j=0;j<m;j++)
    tab[i][j]=i+j+r;
   }

    for ( int i = 0; i < n; ++i,cout << endl)

            for ( int j = 0; j < m; ++j)
            cout<<tab[i][j]<<'\t';


   for (int i=0;i<n;i++)
   delete[] tab[i];
  delete[] tab;
}

int main()
{
    int n,m,k;
    tablica(n,m,k);
   return 0;
}
