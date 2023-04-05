#include <iostream>

using namespace std;

struct point
{
	double x, y;
	point() {}
	point(double x, double y) : x(x), y(y) {}
};

class square
{
public:
	point lgora;
	double bok;
public:
	square(const point& p, double b) : lgora(p), bok(b) {}
	square(double x, double y, double b) : lgora(point(x,y)), bok(b) {}
	square() {}
	square operator +(const square& k)
	{
		return square(lgora, bok + k.bok);
	}
	square operator -(const square& k)
	{
		return square(k.lgora, bok - k.bok);
	}
	friend ostream& operator <<(ostream& o, const square& k)
	{
		o << "x: " << k.lgora.x << " y: " << k.lgora.y << " bok: " << k.bok << endl;
		return o;
	}
	friend istream& operator >>(istream& i, square& k)
	{
		cout << "x: ";
		i >> k.lgora.x;
		cout << "y: ";
		i >> k.lgora.y;
		cout << "bok: ";
		i >> k.bok;
		return i;
	}
};




int main() {
	square k1, k2;
	cin >> k1 >> k2;
	square ks1 = k1 + k2;
	square ks2 = k2 + k1;
	square kr1 = k1 - k2;
	square kr2 = k2 - k1;
	cout << ks1 << ks2 << kr1 << kr2;


	return 0;
}
