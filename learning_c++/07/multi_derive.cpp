#include <iostream>
using namespace std;

class B1 {
	int a;
public:
	B1(int x) {a = x;}
	int get_a() {return a;}
};

class B2 {
	int b;
public:
	B2(int x) {b = x;}
	int get_b() {return b;}
};

class D1 : public B2, public B1{
	int c;
public:
	D1(int x, int y, int z) : B1(x), B2(y) {c = z;}
	void show() {cout << get_a() << " " << get_b() << " " << c << endl;}
};

int main(void)
{
	D1 obj(1,2,3);
	obj.show();
	cout << obj.get_a() << " " << obj.get_b() << endl;

	return 0;
}