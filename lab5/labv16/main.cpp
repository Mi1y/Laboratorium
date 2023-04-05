#include <iostream>

using namespace std;

int f(int n,int m)
{
     if (n==0)
        return m;
    else if (m==0)
        return n;
    else
        return f(n-1,m)+f(n,m-1)+f(n-1,m-1);
}


int main()
{
    int n,m;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    cin >> m;
    cout << f(n,m) << " " << endl;
    return 0;
}
