#include <iostream>

using namespace std;

int silnia(int x, int y)
{
    if (x<=y)
        return y;
    else
        cout << y << " " ;
        return silnia(x,y+1);
}


int main()
{
    int x;
    int y;

    cout << "Podaj liczbe x i y " << endl;
    cin >> x;
    cin >> y;
    cout << silnia(x,y) << " " << endl;
    return 0;
}
