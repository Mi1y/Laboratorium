#include <iostream>

using namespace std;
float galon;
float litr;


int main()
{
    cout << "Podaj ile litr ma przeliczac na galony" << endl;
    cin >> litr;
    galon = litr * 0.264172052;
    cout << "Galon: " << galon;
    return 0;
}
