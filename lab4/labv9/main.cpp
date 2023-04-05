#include <iostream>

using namespace std;

int nieparzysty()
{
    int n,i;
    cout <<"Podaj cyfre n" << endl;
    cin >> n;
    for (i=1;i<=n;++i){
    if (i%2!=0)
        cout << i << " ";
}
}
int main()
{
    nieparzysty();
    return 0;
}


 //for (i=0;i<n;++i){
   /*     n%3==0;
    cout << n << endl; }
    //else {}

    if (n%2==1)
        i++;
        cout << n << endl;
    }
      do {
    n%2==1;
    i++;
    cout << n << endl;
    }while (i<n);
}
*/
