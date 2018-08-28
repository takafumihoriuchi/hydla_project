#include <iostream>
#include <cstdlib>
using namespace std;

class area {
	double len1, len2;
public:
	void setarea(double d1, double d2) {this->len1 = d1; this->len2 = d2;}
	void getdim(double &d1, double &d2) {d1 = this->len1; d2 = this->len2;}
	virtual double getarea() = 0;
};

class rectangle : public area {
public:
	double getarea() {double d1, d2; getdim(d1, d2); return d1 * d2;}
};

class triangle : public area {
public:
	double getarea() {double d1, d2; getdim(d1, d2); return d1 * d2 * 0.5;}
};

int main()
{
	// area bad_obj;

	area *p;

	rectangle rect;
	triangle tri;

	p = &rect;
	p->setarea(3.3, 4.5);
	cout << "area of rectangle: " << p->getarea() << endl;

	p = &tri;
	p->setarea(4.0, 5.0);
	cout << "area of triangle: " << p->getarea() << endl;


	return 0;
}