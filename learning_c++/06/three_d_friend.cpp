#include <iostream>
using namespace std;

class three_d {
	int x, y, z;
public:
	three_d(int a, int b, int c);
	void get(int &a, int &b, int &c);
	three_d operator+(three_d &obj);
	three_d operator-(three_d &obj);
	int operator==(three_d &obj);
	int operator!=(three_d &obj);
	int operator||(three_d &obj);
	friend three_d operator+(three_d &obj, int n);
	friend three_d operator+(int n, three_d &obj);
	friend three_d operator-(three_d &obj, int n);
	friend three_d operator-(int n, three_d &obj);
	friend void operator++(three_d &obj);
	friend void operator++(three_d &obj, int nouse);
	friend void operator--(three_d &obj);
	friend void operator--(three_d &obj, int nouse);
};

int three_d::operator==(three_d &obj) {
	return (this->x)==(obj.x)&&(this->y)==(obj.y)&&(this->z)==(obj.z);
}

int three_d::operator!=(three_d &obj) {
	return (this->x)!=(obj.x) || (this->y)!=(obj.y) || (this->z)!=(obj.z);
}

int three_d::operator||(three_d &obj) {
	return (this->x) || (obj.x) || (this->y) || (obj.y) || (this->z) || (obj.z);
}

three_d::three_d(int a=0, int b=0, int c=0) {
	this->x = a; this->y = b; this->z = c;
}

void three_d::get(int &a, int &b, int &c) {
	a = this->x; b = this->y; c = this->z;
}

three_d three_d::operator+(three_d &obj) {
	three_d tmp;
	tmp.x = this->x + obj.x;
	tmp.y = this->y + obj.y;
	tmp.z = this->z + obj.z;
	return tmp;
}

three_d three_d::operator-(three_d &obj) {
	three_d tmp;
	tmp.x = this->x - obj.x;
	tmp.y = this->y - obj.y;
	tmp.z = this->z - obj.z;
	return tmp;
}

three_d operator+(three_d &obj, int n) {
	three_d tmp;
	tmp.x = obj.x + n;
	tmp.y = obj.y + n;
	tmp.z = obj.z + n;
	return tmp;
}

three_d operator+(int n, three_d &obj) {
	three_d tmp;
	tmp.x = obj.x + n;
	tmp.y = obj.y + n;
	tmp.z = obj.z + n;
	return tmp;
}

three_d operator-(int n, three_d &obj) {
	three_d tmp;
	tmp.x = n - obj.x;
	tmp.y = n - obj.y;
	tmp.z = n - obj.z;
	return tmp;
}

three_d operator-(three_d &obj, int n) {
	three_d tmp;
	tmp.x = obj.x - n;
	tmp.y = obj.y - n;
	tmp.z = obj.z - n;
	return tmp;
}

void operator++(three_d &obj) {
	obj.x++;
	obj.y++;
	obj.z++;
}

void operator++(three_d &obj, int nouse) {
	obj.x++;
	obj.y++;
	obj.z++;
}

void operator--(three_d &obj) {
	obj.x--;
	obj.y--;
	obj.z--;
}

void operator--(three_d &obj, int nouse) {
	obj.x--;
	obj.y--;
	obj.z--;
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

	obj3 = obj1 + 3;
	obj3.get(x,y,z);
	cout << "obj1 + 3 = (" << x << "," << y << "," << z << ")\n";

	obj3 = 3 + obj1;
	obj3.get(x,y,z);
	cout << "3 + obj1 = (" << x << "," << y << "," << z << ")\n";

	obj3 = obj1 - 3;
	obj3.get(x,y,z);
	cout << "obj1 - 3 = (" << x << "," << y << "," << z << ")\n";

	obj3 = 3 - obj1;
	obj3.get(x,y,z);
	cout << "3 - obj1 = (" << x << "," << y << "," << z << ")\n";

	three_d obj4(2,1,0);
	if (obj4 == obj3) cout << "obj4 == obj3\n";
	else cout << "obj4 != obj3\n";

	if (obj3 || obj4) cout << "obj3 || obj4 is true.\n";
	else cout << "obj3 || obj4 is false.\n";

	return 0;
}