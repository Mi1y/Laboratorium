#include <iostream>

using namespace std;

int A(int m,int n)
{
     if (m==1)
        return n+1;

    else if ((m<0)&&(n==0))
        return A(m-1,1);

    else if ((m>0)&&(n>0))
        return A(m-1,A(m,n-1));
}


int main()
{
    int m,n;
    cout << "Podaj liczbe" << endl;
    cin >> m;
    cin >> n;
    cout << "Wynik to " << A(m,n) << endl;
    return 0;
}
