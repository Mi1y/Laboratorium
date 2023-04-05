#include <iostream>

using namespace std;

int silnia(int x, int y=0)
{
//int y= 0;
    if (x<=y)
       return y;
    else
        cout << y << " " ;
        return silnia(x,y+1);
}


int main()
{
    int x;
    int y=0;
    cout << "Podaj liczbe x  " << endl;
    cin >> x;
    cout << silnia(x,y) << " " << endl;
    return 0;
}
