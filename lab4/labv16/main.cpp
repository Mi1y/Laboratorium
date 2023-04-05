#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

int liczbanieparzysta()
{
int  a,suma,wynik,i;
//int i;
cout << "podaj liczbe a" << endl;
cin >> a;
suma=a/3;
for (i=0;i<3;++i){
    wynik=suma;
    if (wynik%2!=0) {
       wynik=suma-2;
        cout << wynik << " " << endl;
    }
        else if (wynik%2==0) {
       wynik=suma+1;
        cout << wynik << " " << endl;
        }
}
}
int main()
{
    liczbanieparzysta();
    return 0;
}
