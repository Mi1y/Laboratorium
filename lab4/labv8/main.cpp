#include <iostream>

using namespace std;

int dwaliczby()
{
    int n,m,i;
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    cout << "Podaj liczbe m" << endl;
    cin >> m;

   for (i=1;i<n;i++){
   cout << n << "/" << m << "=" << n/m << endl;
   n=n/m;
   }

}
int main()
{
    dwaliczby();
    return 0;
}
