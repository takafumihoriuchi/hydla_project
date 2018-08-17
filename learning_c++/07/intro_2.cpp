#include <iostream>
using namespace std;

class base {
	int x;
public:
	void set_x(int n) {x = n;}
	void show_x() {cout << x << endl;}
};

class derived : private base {
	int y;
public:
	void set_y(int n) {y = n;}
	void show_y() {cout << y << endl;}
	void d_set_x(int n) {this->set_x(n);}
	void d_show_x() {this->show_x();}
};


int main()
{
	derived obj;
	obj.d_set_x(2);
	obj.set_y(7);
	obj.d_show_x();
	obj.show_y();

	return 0;
}