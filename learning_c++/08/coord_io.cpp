#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	friend ostream &operator<<(ostream &stream, coord obj);
	friend istream &operator>>(istream &stream, coord &obj);
};

ostream &operator<<(ostream &stream, coord obj) {
	stream << "(" << obj.x << "," << obj.y << ")";
	return stream;
}

istream &operator>>(istream &stream, coord &obj) {
	cout << &obj << ".x : ";
	stream >> obj.x;
	cout << &obj << ".y : ";
	stream >> obj.y;
	return stream;
}

int main()
{
	coord x(1,2), y;
	cout << x << endl;
	cin >> y;
	cout << y << endl;

	return 0;
}