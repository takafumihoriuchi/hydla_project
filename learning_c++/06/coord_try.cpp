#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	int operator+(coord ob2);
};

int coord::operator+(coord ob2) {
	int sum;
	sum = this->x + ob2.x + this->y + ob2.y;
	return sum;
}

int main()
{
	coord o1(10, 10), o2(5, 3);
	int sum;

	sum = o1 + o2;
	
	cout << "sum: " << sum << endl;

	return 0;
}
