#include <iostream>

using namespace std;
int suma()
{
int a=200;
int b=400;
int *x;
a+=b;
x=&a;
cout <<"suma wynosi: "<< *x << endl;

}


int main()
{
    suma();
    return 0;
}
