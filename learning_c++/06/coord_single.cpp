#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	coord operator++();
	coord operator++(int foo);
	coord operator--();
	coord operator--(int foo);
};

coord coord::operator++() {
	this->x++;
	this->y++;
	return *this;
}

coord coord::operator++(int foo) {
	cout << "foo: " << foo << endl;
	this->x++;
	this->y++;
	return *this;
}

coord coord::operator--() {
	this->x--;
	this->y--;
	return *this;
}

coord coord::operator--(int foo) {
	cout << "foo: " << foo << endl;
	this->x--;
	this->y--;
	return *this;
}

int main()
{
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o3 = --o1;

	o3.get_xy(x, y);
	cout << "--o1 = (" << x << ", " << y << ")\n";

	// cout << +(-3) << endl;

	return 0;
}