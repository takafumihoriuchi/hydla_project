#include <iostream>
using namespace std;

class base {
protected:
	int a, b;
public:
	void set_ab(int m, int n) {a = m; b = n;}
};

class derived : public base {
	int c;
public:
	void set_c(int n) {c = n;}
	void show_abc() {cout << a << " " << b << " " << c << endl;}
};

int main()
{
	derived obj;
	obj.set_ab(1,2);
	obj.set_c(3);
	obj.show_abc();

	return 0;
}