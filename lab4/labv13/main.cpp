#include <iostream>

using namespace std;
int poletrojkata()
{
float a,h,P;
cout << "Podaj dlugosc podstawy" << endl;
cin >> a;
cout << "Podaj wysokosc trojkata" << endl;
cin >> h;

    P=0.5*(a*h);
cout <<"Pole trojkata wynosi: " << P;


}
int main()
{
    poletrojkata();
    return 0;
}
