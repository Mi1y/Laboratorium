#include <iostream>
#include <math.h>
using namespace std;
float stopnie;
float radiany;
int main()
{
    setlocale(LC_CTYPE,"Polish");
    cout << "Program przeliczaj¹cy wielkoœæ k¹ta wyra¿on¹ w stopniach na radiany" << endl;
    cin >> stopnie;
    radiany = (M_PI*stopnie)/180;
    cout << "Radian wynosi: " <<radiany;
    return 0;
}
