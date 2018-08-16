#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	coord operator+(coord ob2);
	coord operator-(coord ob2);
	coord operator=(coord ob2);
	coord operator*(int k);
	coord operator/(int k);
};

coord coord::operator+(coord ob2) {
	coord tmp;
	tmp.x = this->x + ob2.x;
	tmp.y = this->y + ob2.y;
	return tmp;
}

coord coord::operator-(coord ob2) {
	coord tmp;
	tmp.x = this->x - ob2.x;
	tmp.y = this->y - ob2.y;
	return tmp;
}

coord coord::operator=(coord ob2) {
	this->x = ob2.x;
	this->y = ob2.y;
	return *this;
}

coord coord::operator*(int k) {
	coord tmp;
	tmp.x = this->x * k;
	tmp.y = this->y * k;
	return tmp;
}

coord coord::operator/(int k) {
	coord tmp;
	tmp.x = this->x / k;
	tmp.y = this->y / k;
	return tmp;
}


int main()
{
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o3 = o1 + o2;
	o3.get_xy(x, y);
	cout << "o1 + o2 = (" << x << ", " << y << ")\n";

	o3 = o1 - o2;
	o3.get_xy(x, y);
	cout << "o1 - o2 = (" << x << ", " << y << ")\n";

	o3 = o1;
	o3.get_xy(x, y);
	cout << "o1 = (" << x << ", " << y << ")\n";

	o3 = o1 * 7;
	o3.get_xy(x, y);
	cout << "o1 * 7 = (" << x << ", " << y << ")\n";

	o3 = o1 / 7;
	o3.get_xy(x, y);
	cout << "o1 / 7 = (" << x << ", " << y << ")\n";

	return 0;
}