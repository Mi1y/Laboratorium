#include <iostream>

using namespace std;

int wyswietl()
{
    int *a;
    int *b;
    *a=*a+5;
    *b=*b+10;
    if (a<b)
        cout << *b << endl;
}

int main()
{
    wyswietl();
   // if (a>b)
   //     cout << a << endl;
   // else{}
    return 0;
}
