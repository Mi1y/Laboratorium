#include <iostream>

using namespace std;

int silnia()
{
    int n,i;
    int silnia=1;
    cout << "Podaj liczbe n "  << endl;
    cin >> n;
    for (i=n;i>1;i--)

        silnia*=i;
        //cout << i+1 << "*" << endl;
    cout <<"laczny wynik z silnii wynosi: " << silnia << endl;

}

int main()
{
    silnia();
    return 0;
}
