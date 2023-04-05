#include <iostream>

using namespace std;
int przepisanie()
{
int i;
int *w;
w=&i;
*w=*w+100;
cout <<"i wynosi: " << i << endl;


}
int main()
{
    przepisanie();
    return 0;
}
