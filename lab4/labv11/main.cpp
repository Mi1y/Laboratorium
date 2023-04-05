#include <iostream>

using namespace std;

int najwiekszaliczba()
{
float a,suma,suma2;
int i;
cout << "podaj liczbe a" << endl;
cin >> a;
suma=a/3;
suma2 =suma+1;
cout << " " << suma2;
for (i=0;i<2;++i){
    suma2=suma2-1;

    cout << " " << suma2;
}
}
int main()
{
    najwiekszaliczba();
    return 0;
}
