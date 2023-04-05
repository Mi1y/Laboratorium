#include <iostream>
using namespace std;

int x = 6;
int y = 4;
int zmiana;
int main()
{
    zmiana=x;
    x=y;
    y=zmiana;
    cout << "Zamiana x: " << x << " y: " << y ;

    return 0;
}
