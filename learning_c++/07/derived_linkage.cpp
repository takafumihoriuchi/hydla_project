#include <iostream>
using namespace std;

class B1 {
	int a;
public:
	B1(int x) {a = x;}
	int get_a() {return a;}
};

class D1 : public B1 {
	int b;
public:
	D1(int x, int y) : B1(x) {b = y;}
	int get_b() {return b;}
};

class D2 : public D1 {
	int c;
public:
	D2(int x, int y, int z) : D1(x, y) {c = z;}
	void show() {cout << get_a() << " " << get_b() << " " << c << endl;}
};

int main(void)
{
	D2 obj(1,2,3);
	obj.show();
	cout << obj.get_a() << " " << obj.get_b() << endl;

	return 0;
}