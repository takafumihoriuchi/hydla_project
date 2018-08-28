#include <iostream>
using namespace std;

class base {
protected:
	int i;
public:
	base(int x) { i = x; }
	virtual void func() { cout << "using func() of base: " << i << endl; }
};

class derived1 : public base {
public:
	derived1(int x) : base(x) {}
	void func() { cout << "using func() of derived1: " << i*i << endl; }
};

class derived2 : public base {
public:
	derived2(int x) : base(x) {}
	void func() { cout << "using func() of derived2: " << i+i << endl; }
};

int main()
{
	base *p;

	base ob(10);
	derived1 ob_d1(11);
	derived2 ob_d2(12);

	p = &ob;
	p->func();
	p = &ob_d1;
	p->func();
	p = &ob_d2;
	p->func();

	return 0;
}