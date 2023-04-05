#include <iostream>

using namespace std;

int dodawanienapisybezbiblioteki()
{
char tekst1[11] = "Hello";
char tekst2[] = " World";
  int length, i;

  length = 0;
  while (tekst1[length] != '\0') {
    ++length;
  }

  for (i = 0; tekst2[i] != '\0'; ++i, ++length) {
    tekst1[length] = tekst2[i];
  }

  tekst1[length] = '\0';
  puts(tekst1);
}
int main()
{
    dodawanienapisybezbiblioteki();

return 0;
}
