#include <iostream>

using namespace std;

int main()
{
    int zm1;
    int *wsk;
    wsk=&zm1;
    cin >> zm1;
    zm1+=*wsk;
    cout << "wynik to: " << zm1 << endl;
    cin >> zm1;
    zm1-=*wsk;
    cout <<"wynik to: "<< zm1 << endl;
    return 0;
}
