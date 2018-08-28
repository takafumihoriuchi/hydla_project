#include <iostream>
#include <fstream>
using namespace std;

class base {
	int x;
public:
	void set_x(int n) {this->x = n;}
	int get_x() {return this->x;}
};

class derived : public base {
	int y;
public:
	void set_y(int n) {this->y = n;}
	int get_y() {return this->y;}
};

int main()
{
	base *p;

	base obj_base;
	derived obj_derived;

	p = &obj_base;
	p->set_x(11);
	cout << "x in obj_base: " << p->get_x() << endl;

	p = &obj_derived;
	p->set_x(22);
	// p->set_y(33);
	obj_derived.set_y(33);
	cout << "x in obj_derived: " << p->get_x() << endl;
	// cout << "y in obj_derived: " << p->get_y() << endl;
	cout << "y in obj_derived: " << obj_derived.get_y() << endl;

	/* ------------------------------------- */

	derived *q;

	q = &obj_derived;
	cout << "x in obj_derived: " << q->get_x() << endl;
	cout << "y in obj_derived: " << obj_derived.get_y() << endl;

	// q = &obj_base;
	// cout << "x in obj_base: " << q->get_x() << endl;

	return 0;
}