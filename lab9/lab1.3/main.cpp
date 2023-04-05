#include <iostream>

using namespace std;

int funkcja()
{
    int zm1=1024;
}
int main()
{
    int zm1=256;
    int *wsk;
    wsk=&zm1;
    cout << "Zm1 wynosi: " << *wsk << endl;

    funkcja();
    wsk=&zm1;
    cout << "Zm1 wynosi: " << *wsk << endl;
    return 0;
}
