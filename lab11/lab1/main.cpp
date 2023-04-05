#include <iostream>
using namespace std;

class Okrag
{
  private:
		  double X;
		  double P;
  public:

		 double Pow();
		 Okrag();
		 Okrag(double, double);
		 };

Okrag::Okrag()
{

		  X = 0;
		  P = 0;
		  }
Okrag::Okrag(double XX, double PP)
{
X = XX;
P = PP;
cout<<"Srodek okregu i jego wsp. na OX to: " <<X << endl;
cout<<"Promien to: " <<P << endl;

}
double Okrag::Pow()
{
  cout<<"Pole to " <<(P*P)*3.14 << endl;
}

int main (int, char*)
{
double p1,p2, x1,x2;
double pole;

cout<<"Podaj pozycje pierwszego okregu na OX" << endl;
cin >> x1;
cout<<"Podaj pozycje drugiego okregu na OX " << endl;
cin >> x2;
cout<<"Podaj promien pierwszego kola" << endl;
cin >> p1;
cout<<"Podaj promien drugiego kola" << endl;
cin >> p2;
Okrag a(x1, p1);
Okrag b(x2, p2);
a.Pow();
b.Pow();
getchar();
if (p1 < p2 )
{
	   cout<<"Jeden z okregow zawarty jest w drugim okregu " << endl;;
	   }
	   if (p2 < p1)
	   {
	   cout<<"Drugi jest w pierwszym okregu " << endl;
	   }
	   if (p1 == p2)
	   {
	   cout<<"Sa na sobie" << endl;
	   }

}
