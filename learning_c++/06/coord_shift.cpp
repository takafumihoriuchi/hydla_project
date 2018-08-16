#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	coord operator>>(int shamt);
	coord operator<<(int shamt);
};

coord coord::operator>>(int shamt) {
	coord tmp;
	tmp.x = this->x >> shamt;
	tmp.y = this->y >> shamt;
	return tmp;
}

coord coord::operator<<(int shamt) {
	coord tmp;
	tmp.x = this->x << shamt;
	tmp.y = this->y << shamt;
	return tmp;
}

int main()
{
	coord o1(64, 32), o2, o3;
	int x, y;

	o2 = o1 << 3;
	o3 = o1 >> 2;

	o2.get_xy(x, y);
	cout << "o1 << 3 = (" << x << ", " << y << ")\n";

	o3.get_xy(x, y);
	cout << "o1 >> 2 = (" << x << ", " << y << ")\n";

	return 0;
}