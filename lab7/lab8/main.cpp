#include <iostream>
#include <math.h>
using namespace std;
int prime(int n)
{
    if (n & 1)
        n -= 2;
    else
        n--;

    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }
    return 2;
}

int main()
{
    int n = 5;
    cout << prime(n);
    return 0;
}
