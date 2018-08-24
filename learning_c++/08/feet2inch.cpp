#include <iostream>
using namespace std;

class feet2inch {
	double feet;
	double inch;
public:
	void set(double f) {
		feet = f;
		inch = f * 12.0;
	}
	friend ostream &operator<<(ostream &stream, feet2inch obj);
	friend istream &operator>>(istream &stream, feet2inch &obj);
};

ostream &operator<<(ostream &stream, feet2inch obj) {
	stream << "in feet : " << obj.feet << endl;
	stream << "in inch : " << obj.inch;
	return stream;
}

istream &operator>>(istream &stream, feet2inch &obj) {
	cout << "input in feet : ";
	stream >> obj.feet;
	obj.set(obj.feet);
	return stream;
}

int main()
{
	feet2inch a;
	cin >> a;
	cout << a << endl;

	return 0;
}