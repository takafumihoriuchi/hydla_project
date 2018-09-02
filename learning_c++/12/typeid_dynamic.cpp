#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
	virtual void f() {}
};

class Derived : public Base {
public:
	void derivedOnly() {
		cout << "Derived object" << endl;
	}
};

int main()
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	// by using typeid
	bp = &b_ob;
	if (typeid(*bp) == typeid(Derived)) {
		dp = (Derived *)bp;
		dp->derivedOnly();
	} else {
		cout << "failed to convert from Base * to Derived" << endl;
	}

	bp = &d_ob;
	if (typeid(*bp) == typeid(Derived)) {
		dp = (Derived *)bp;
		dp->derivedOnly();
	} else {
		cout << "oops! something went wrong..." << endl;
	}

	// by using dynamic cast
	bp = &b_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp) {
		dp->derivedOnly();
	} else {
		cout << "failed to convert from Base * to Derived *" << endl;
	}

	bp = &d_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp) {
		dp->derivedOnly();
	} else {
		cout << "oops! something went wrong..." << endl;
	}

	return 0;
}