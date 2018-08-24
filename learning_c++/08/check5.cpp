#include <iostream>
using namespace std;

class pwr {
	int base;
	int exponent;
	int result;
public:
	pwr(int b, int e);
	friend ostream &operator<<(ostream &stream, pwr obj);
	friend istream &operator>>(istream &stream, pwr &obj);
};

pwr::pwr(int b=1, int e=1) {
	base = b;
	exponent = e;
	result = 1;
	for (; e; e--) result *= base;
}

ostream &operator<<(ostream &stream, pwr obj) {
	stream << obj.base << '^' << obj.exponent << " = " << obj.result << endl;
	return stream;
}

istream &operator>>(istream &stream, pwr &obj) {
	cout << "base     : ";
	stream >> obj.base;
	cout << "exponent : ";
	stream >> obj.exponent;
	obj.result = 1;
	int e = obj.exponent;
	for (; e; e--) obj.result *= obj.base;
	return stream;
}

int main()
{
	pwr obja(3,4), objb;
	
	cout << obja;
	
	cin >> objb;
	cout << objb;

	return 0;
}