#include <iostream>
#include <typeinfo>
using namespace std;

class BaseClass {
	virtual void f() {};
};

class Derived1 : public BaseClass {
};

class Derived2 : public BaseClass {
};

void WhatType(BaseClass &obj) {
	cout << "obj is pointing at type: " << typeid(obj).name() << endl;
}

int main()
{
	BaseClass baseob;
	Derived1 ob1;
	Derived2 ob2;

	WhatType(baseob);
	WhatType(ob1);
	WhatType(ob2);

	return 0;
}