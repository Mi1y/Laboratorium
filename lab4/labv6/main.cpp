#include <iostream>
using namespace std;

int odwrot(int a)
{

int odwroc=0;
    while (a>0){
        odwroc= odwroc*10 + a%10;
        a= a / 10;
    }
    return odwroc;
}



int main()
{
int a;
cout << "Podaj cyfre a" << endl;
cin >> a;

cout << "Odwrocona kolejnosc to: " << odwrot(a) << endl;
return 0;
}




/*
Zle zrozumialem zadanie
I spos�b

int odwrot (int a)
    {
    if (a<10)
        --a;
        else
        ++a;
        */

       // int i;
        //for (i=0;i<a;--i){}
        //for (i=0;i>a;++i){}
/*
}

int main()
{
    int a;
    cout << "Podaj cyfre a" << endl;
    cin >> a;
    cout << "Liczba odwrotna: "<< odwrot(a) << endl;



II spos�b

/for (a;a<0;--a){
    //if (a%1!=0)
    //i++;
  //  cout <<  a << " ";
//}


III spos�b

int a;
int i;
cout << "Podaj cyfre a" << endl;
cin >> a;
for (a;a<0;--a){
while (a<0)
    break;
    cout <<  a << " ";
*/
