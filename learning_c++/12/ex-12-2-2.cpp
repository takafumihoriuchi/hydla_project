#include <iostream>
using namespace std;

class B {
	virtual void f() {}
};

class D1 : public B {
	void f() {}
};

class D2 : public B {
	void f() {}
};

int main()
{
	B *p;
	// D1 ob;
	D2 ob;

	p = dynamic_cast<D2 *>(&ob);
	if (p) {
		cout << "success" << endl;
	} else {
		cout << "failure" << endl;
	}

	return 0;	
}