/*#include <iostream>

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
            cout<<  tab[i][j]<<'\t';
}

int main()
{
    int n,m;
    tablica(n,m);
   return 0;
}
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int tablica(int **t)
{
   /* int **t = new int **5;
    t[0]= new int *1;
    t[1]= new int *2;
    t[2]= new int *3;
    t[3]= new int *4;
    t[4]= new int *5;
    */
    **t = malloc (sizeof (int *) * 4 ) ;
t [ 0 ] = malloc ( sizeof ( int ) * 3 ) ;
t [ 0 ] = malloc ( sizeof ( int ) * 3 ) ;
t [ 0 ] = malloc ( sizeof ( int ) * 3 ) ;
t [ 0 ] = malloc ( sizeof ( int ) * 3 ) ;


    t[0][1]=5;
    cout << "%d \n" << t[0][1];

    delete (t[0]);
    delete (t[1]);
    delete (t[2]);
    delete (t[3]);
    delete (t[4]);
    delete (t);
}



int main()
{
    tablica();
   return 0;
}
