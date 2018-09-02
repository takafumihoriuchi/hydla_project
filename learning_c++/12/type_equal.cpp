#include <iostream>
#include <typeinfo>
using namespace std;

class X {
	virtual void f() {}
};

class Y {
	virtual void f() {}
};

int main()
{
	X x1, x2;
	Y y1;

	if (typeid(x1) == typeid(x2)) {
		cout << "yesx" << endl;
	} else {
		cout << "nox" << endl;
	}

	if (typeid(x1) != typeid(y1)) {
		cout << "yesy" << endl;
	} else {
		cout << "noy" << endl;
	}

	return 0;
}