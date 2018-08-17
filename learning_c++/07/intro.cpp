#include <iostream>
using namespace std;

class base {
	int x;
public:
	void set_x(int n) {x = n;}
	void show_x() {cout << x << endl;}
};

class derived : public base {
	int y;
public:
	void set_y(int n) {y = n;}
	void show_y() {cout << y << endl;}
};


int main()
{
	derived obj;
	obj.set_x(2);
	obj.set_y(7);
	obj.show_x();
	obj.show_y();

	return 0;
}