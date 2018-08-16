#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	coord operator+(coord ob2);
};

coord coord::operator+(coord ob2) {
	// ob2.x += this->x;
	// ob2.y += this->y;
	// return ob2;	
	
	// これは間違い。アドレスで受け取っているので、基データが書き換えられてしまう。
	x += ob2.x;
	y += ob2.y;
	return *this;	

	// coord tmp;
	// tmp.x = this->x + ob2.x;
	// tmp.y = this->y + ob2.y;
	// return tmp;
}

int main()
{
	coord o1(10, 10), o2(5, 3), o3, o4;
	int x, y;

	o3 = o1 + o2;
	o4 = o1 + o3;

	o3.get_xy(x, y);
	cout << "o1 + o2 = (" << x << ", " << y << ")\n";

	o4.get_xy(x, y);
	cout << "o1 + o3 = (" << x << ", " << y << ")\n";

	return 0;
}