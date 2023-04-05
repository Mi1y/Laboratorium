#include <iostream>

using namespace std;

int main()
{
    double zm1=200;
    double zm2=400;
    double *wsk1;
    double *wsk2;
    wsk1=&zm1;
    wsk2=&zm1;
    cout << "wsk1 wynosi: "<< *wsk1 << endl;
    cout << "wsk2 wynosi: "<< *wsk2 << endl;
    wsk1=&zm2;
    wsk2=&zm2;
    cout << "wsk1 wynosi: "<< *wsk1 << endl;
    cout << "wsk2 wynosi: "<< *wsk2 << endl;
    zm1=5;
    wsk1=&zm1;
    cout << "wsk1 wynosi: "<< *wsk1 << endl;
    return 0;
}
