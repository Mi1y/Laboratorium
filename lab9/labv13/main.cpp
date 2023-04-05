#include <iostream>

using namespace std;

int tablicy()
{
    int x;
    int n[2];
    n[0]=3;
    n[1]=5;
    n[2]=7;
    int *w;
    w=&n[1];
    x=*w;
    cout <<"pierwszy element z tablicy: " << x << endl;
}
int main()
{
    tablicy();
    return 0;
}
