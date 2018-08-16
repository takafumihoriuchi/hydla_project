#include <iostream>
using namespace std;

class three_d {
	int x, y, z;
public:
	three_d(int a, int b, int c);
	void get(int &a, int &b, int &c);
	three_d operator+(three_d obj);
	three_d operator-(three_d obj);
	three_d &operator++();
	three_d &operator++(int nouse);
	three_d &operator--();
	three_d &operator--(int nouse);
};

three_d::three_d(int a=0, int b=0, int c=0) {
	this->x = a; this->y = b; this->z = c;
}

void three_d::get(int &a, int &b, int &c) {
	a = this->x; b = this->y; c = this->z;
}

three_d three_d::operator+(three_d obj) {
	three_d tmp;
	tmp.x = this->x + obj.x;
	tmp.y = this->y + obj.y;
	tmp.z = this->z + obj.z;
	return tmp;
}

three_d three_d::operator-(three_d obj) {
	three_d tmp;
	tmp.x = this->x - obj.x;
	tmp.y = this->y - obj.y;
	tmp.z = this->z - obj.z;
	return tmp;
}

three_d &three_d::operator++() {
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

three_d &three_d::operator++(int nouse) {
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

three_d &three_d::operator--() {
	this->x--;
	this->y--;
	this->z--;
	return *this;
}

three_d &three_d::operator--(int nouse) {
	this->x--;
	this->y--;
	this->z--;
	return *this;
}


int main()
{
	three_d obj1(1,2,3), obj2(3,4,5), obj3;
	int x, y, z;

	obj1.get(x,y,z);
	cout << "obj1 = (" << x << "," << y << "," << z << ")\n";

	obj1++;
	obj1.get(x,y,z);
	cout << "obj1++ = (" << x << "," << y << "," << z << ")\n";

	++obj1;
	obj1.get(x,y,z);
	cout << "++obj1 = (" << x << "," << y << "," << z << ")\n";

	--obj1;
	obj1.get(x,y,z);
	cout << "--obj1 = (" << x << "," << y << "," << z << ")\n";

	obj1--;
	obj1.get(x,y,z);
	cout << "obj1-- = (" << x << "," << y << "," << z << ")\n";

	obj3 = obj1 + obj2;
	obj3.get(x,y,z);
	cout << "obj1 + obj2 = (" << x << "," << y << "," << z << ")\n";

	obj3 = obj1 - obj2;
	obj3.get(x,y,z);
	cout << "obj1 - obj2 = (" << x << "," << y << "," << z << ")\n";

	return 0;
}