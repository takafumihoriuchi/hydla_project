#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	coord operator-();
	coord operator-(coord ob2);
};

coord coord::operator-() {
	// この実装は間違っている。元が書き換えられてしまう。
	// this->x = -x;
	// this->y = -y;
	// return *this;
	// こちらの方が良い
	coord tmp;
	tmp.x = -this->x;
	tmp.y = -this->y;
	return tmp;
}

coord coord::operator-(coord ob2) {
	coord tmp;
	tmp.x = this->x - ob2.x;
	tmp.y = this->y - ob2.y;
	return tmp;
}

int main()
{
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o3 = -o1;
	o3.get_xy(x, y);
	cout << "-o1 = (" << x << ", " << y << ")\n";

	o3 = o1 - o2;
	o3.get_xy(x, y);
	cout << "o1 - o2 = (" << x << ", " << y << ")\n";

	return 0;
}