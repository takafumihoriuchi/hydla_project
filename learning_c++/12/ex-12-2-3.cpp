#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;

class Shape {
public:
	virtual void example() = 0;
};

class Line : public Shape {
public:
	void example() {
		cout << "******" << endl;
	}
};

class Triangle : public Shape {
public:
	void example() {
		cout << "*" << endl;
		cout << "* *" << endl;
		cout << "*  *" << endl;
		cout << "*****" << endl;
	}
};

class Rectangle : public Shape {
public:
	void example() {
		cout << "*****" << endl;
		cout << "*   *" << endl;
		cout << "*   *" << endl;
		cout << "*****" << endl;
	}
};

class NullShape : public Shape {
public:
	void example() {
		cout << "" << endl;
	}
};

Shape *generator() {
	switch (rand() % 4) {
		case 0:
		return new Line;
		case 1:
		return new Triangle;
		case 2:
		return new Rectangle;
		case 3:
		return new NullShape;
		default:
		break;
	}
	return NULL;
}

int main()
{
	Shape *p;

	for (int i=0; i<10; i++) {
		p = generator();
		cout << typeid(*p).name() << endl;
		Shape *ps = dynamic_cast<NullShape *>(p);
		if (ps) {
			cout << "ahhh~~! this is a NullShape!! we didn\'t see you~~~!" << endl;
		} else {
			p->example();
		}
		// if (typeid(*p) != typeid(NullShape)) {
		// 	p->example();
		// }
	}

	return 0;
}