#include <iostream>
using namespace std;

class num {
protected:
	int number;
public:
	num(int n) {this->number = n;}
	virtual void shownum() {}
};

class outhex : public num {
public:
	outhex(int n) : num(n) {}
	void shownum() {
		// cout.unsetf(ios::dec);
		cout << hex << this->number << endl;
	}
};

class outoct : public num {
public:
	outoct(int n) : num(n) {}
	void shownum() {
		// cout.unsetf(ios::dec);
		cout << oct << this->number << endl;
	}
};

int main()
{
	outhex obj16(17);
	obj16.shownum();

	outoct obj8(17);
	obj8.shownum();

	return 0;
}