#include<iostream>
using namespace std;

bool samoglosek(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}

int liczeniesamoglosek(string tekst)
{
    int count = 0;
    for (int i=0; i<tekst.length(); i++)
        if (samoglosek(tekst[i])) //
            ++count;
    return count;
}

int main()
{
    string tekst = "kolokwium poprawkowe";

    cout << liczeniesamoglosek(tekst) << endl;
    return 0;
}
