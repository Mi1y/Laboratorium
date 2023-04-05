#include <iostream>

using namespace std;

class cena
{

public:
	cena() : pln(0) {}
	cena& operator +(double n)
	{
		pln += 1.1*n;
		return *this;
	}
	cena& operator -(double n)
	{
		pln -= 0.95*n;
		if (pln < 0)
			pln = 0;
		return *this;
	}
	double get() const { return pln; }
	void set(double n) { pln = n; }



private:
	double pln;

};

int main() {
	cena c;
    c = c + 15.0;
	cout << c.get() << endl;
	c = c - 12.0;
	cout << c.get() << endl;
	return 0;
}
