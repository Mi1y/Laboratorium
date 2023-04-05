#include <iostream>

using namespace std;
int cyfrjednosci()
{
    int n;
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    do{
       n=n%10;
    if (n==5)
        cout << n <<" brawo trafiles";
    else if (n!=5)
        cout << n <<" nie trafiles sproboj jeszcze raz";

    }while (n<0);
       return 0;
}



int main()
{

    cyfrjednosci();
    return 0;
}
