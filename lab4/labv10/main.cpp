#include <iostream>

using namespace std;

int podzielneprzezn()
{
    int a,b,n;
    cout << "Podaj liczbe a" << endl;
    cin >> a;
    cout << "Podaj liczbe b" << endl;
    cin >> b;
    cout << "Podaj liczbe n" << endl;
    cin >> n;

    cout<<"Podzielnych jest " << (b+n)/n-(a+n-1)/n<<endl;
}

int main()
{
    podzielneprzezn();
    return 0;
}
