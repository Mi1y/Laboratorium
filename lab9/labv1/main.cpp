#include <iostream>

using namespace std;

int zamiana()
{
    int *change;
    int a=10;
    int b=20;
    cout <<"liczba a wynosi: "<< a << endl;
    cout <<"liczba b wynosi: "<< b << endl;
    change=&b;
    cout <<"liczba a wynosi: "<< *change << endl;
    change=&a;
    cout <<"liczba b wynosi: "<< *change << endl;
}

int main()
{
    zamiana();
    return 0;
}
