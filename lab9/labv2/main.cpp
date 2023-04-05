#include <iostream>

using namespace std;
int zmiana()
{
    int a=10;
    int b=20;
    cout <<"liczba a wynosi: "<< a << endl;
    cout <<"liczba b wynosi: "<< b << endl;
    int *x;
    if(a>b){
        x=&a;
        cout <<"a wynosi: " << *x << endl;
        x=&b;
        cout <<"b wynosi: " << *x << endl;
    }
    else if (a<b)
        x=&b;
        cout <<"b wynosi: " << *x << endl;
        x=&a;
        cout <<"a wynosi: " << *x << endl;
}

int main()
{
    zmiana();
    return 0;
}
