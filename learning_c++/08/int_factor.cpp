#include <iostream>
using namespace std;

class intfac {
	int integer;
	int smallest_factor;
public:
	intfac() {
		integer = 0;
		smallest_factor = 0;
	}
	intfac(int a) {
		integer = a;
		smallest_factor = calc_sf(integer);
	}
	int calc_sf(int integer);
	friend ostream &operator<<(ostream &stream, intfac obj);
	friend istream &operator>>(istream &stream, intfac &obj);
};

int intfac::calc_sf(int integer) {
	int sf = 1;
	int i;
	for (i=integer-1; i>=2; i--) {
		if (integer % i == 0) {
			sf = i;
		}
	}
	return sf;
}

ostream &operator<<(ostream &stream, intfac obj) {
	stream << "integer       : " << obj.integer << endl;
	stream << "smallest facor: " << obj.smallest_factor;
	return stream;
}

istream &operator>>(istream &stream, intfac &obj) {
	cout << "input an integer: ";
	stream >> obj.integer;
	obj.smallest_factor = obj.calc_sf(obj.integer);
	return stream;
}

int main()
{
	intfac a(3), b;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	return 0;
}