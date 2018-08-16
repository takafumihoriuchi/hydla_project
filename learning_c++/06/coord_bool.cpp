#include <iostream>
#include <cmath>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	int operator==(coord ob2);
	int operator&&(coord ob2);
	int operator<(coord ob2);
	int operator>(coord ob2);
};

int coord::operator==(coord ob2) {
	return (this->x == ob2.x) && (this->x == ob2.x);
}

int coord::operator&&(coord ob2) {
	return (this->x && ob2.x) && (this->x && ob2.x);
}

int coord::operator<(coord ob2) {
	double ob1_dist = sqrt( (this->x)*(this->x) + (this->y)*(this->y) );
	double ob2_dist = sqrt( (ob2.x)*(ob2.x) + (ob2.y)*(ob2.y) );
	return ob1_dist < ob2_dist;
}

int coord::operator>(coord ob2) {
	double ob1_dist = sqrt( (this->x)*(this->x) + (this->y)*(this->y) );
	double ob2_dist = sqrt( (ob2.x)*(ob2.x) + (ob2.y)*(ob2.y) );
	return ob1_dist > ob2_dist;
}

int main()
{
	coord o1(10, 10), o2(5, 3), o3(10, 10), o4(0, 1);
	int x, y;

	if (o1 == o2) cout << "o1 and o2 are the same" << endl;
	else cout << "o1 and o2 are different" << endl;

	if (o1 == o3) cout << "o1 and o3 are the same" << endl;
	else cout << "o1 and o3 are different" << endl;

	if (o1 && o2) cout << "o1 and o2 is True" << endl;
	else cout << "o1 and o2 is False" << endl;

	if (o1 && o4) cout << "o1 and o4 is True" << endl;
	else cout << "o1 and o4 is False" << endl;

	if (o1 < o4) cout << "o1 is less than o4" << endl;
	else cout << "o1 is not less than o4" << endl;

	return 0;
}