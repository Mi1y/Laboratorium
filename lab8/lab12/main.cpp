#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void dodawanienapisy()
{
char tekst[20];
strcpy (tekst, "Hello");
strcat (tekst, "World");
puts (tekst);
}

int main()
{
    dodawanienapisy();
    return 0;
}
