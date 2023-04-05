#include <iostream>

using namespace std;

int funkcja (int tab[], int n)
{
    int i=0;
    while (i<n)
    {
        tab[i]=tab[i]*tab[i];
        i++;
    }
}

int main()
{
    int tab[] = {1,2};
    int n=2, i;
    funkcja(tab,n);
    for (i=0;i<n; ++i){

    cout << "tablica " << i << " " << tab[i]<< endl;
}
while(i<=2){

        a = i + b;
        c = i + b;
        i++;

        int reverse = 0;                           //reversing numbers
        int remainder = c%10;
        reverse = reverse*10 + remainder;
        c/=10;
    return 0;
}
