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

int main()
{
	// int i;
	BaseClass *p, baseob;
	Derived1 ob1;
	Derived2 ob2;

	// cout << "iのtypeidは: " << typeid(i).name() << endl;
	cout << "intのtypeidは: " << typeid(int).name() << endl;

	p = &baseob;
	cout << "pが指しているオブジェクトタイプ: " << typeid(*p).name() << endl;

	p = &ob1;
	cout << "pが指しているオブジェクトタイプ: " << typeid(*p).name() << endl;

	p = &ob2;
	cout << "pが指しているオブジェクトタイプ: " << typeid(*p).name() << endl;

	return 0;
}