#include <iostream>

using namespace std;

int liczbapierwszaczyzlozona()
{
    int n,i;
    cout << "Podaj liczbe: \n";
    cin >>n;

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            cout << "zlozona 0 /n";
            break;
        }
        else
        {
            cout << "liczba pierwsza 1/n";
            break;
        }
    }

    return 0;
}

int main()
{
    liczbapierwszaczyzlozona();
    return 0;
}
