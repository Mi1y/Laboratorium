#include <iostream>

using namespace std;
int wyswietl()
{
    int a=500;
    int b=400;
    int *x;
    if(a<b){
        x=&a;
    cout <<"a wynosi: " << *x << endl;
    }
    else if (a>b)
        x=&b;
    cout <<"b wynosi: " << *x << endl;
}

int main()
{
    wyswietl();
    return 0;
}
