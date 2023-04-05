#include <iostream>

using namespace std;

int main()
{
    int x,i;
    cout <<"Podaj cyfre x" << endl;
    cin >> x;
    for (i=1;i<=x;++i){
    if (i%3==0)
        cout << i << " ";
}
}
