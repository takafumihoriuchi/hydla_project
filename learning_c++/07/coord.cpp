#include <iostream>
using namespace std;



class coord {
public:
	int x, y;
	coord() {x = 0; y = 0;}
	coord(int a, int b) {x = a; y = b;}
	void get_xy(int &a, int &b) {a = x; b = y;}
	coord operator+(coord obj);
	coord operator-(coord obj);
	coord operator=(coord obj);
};

coord coord::operator+(coord obj) {
	coord tmp;
	tmp.x = this->x + obj.x;
	tmp.y = this->y + obj.y;
	return tmp;
}

coord coord::operator-(coord obj) {
	coord tmp;
	tmp.x = this->x - obj.x;
	tmp.y = this->y - obj.y;
	return tmp;
}

coord coord::operator=(coord obj) {
	this->x = obj.x;
	this->y = obj.y;
	return *this;
}



class quad : public coord {
	int quadrant;
public:
	quad() : coord() {quadrant = 0;}
	quad(int x, int y) : coord(x, y) {
		if (x>=0 && y>=0) quadrant = 1;
		else if (x<0 && y>=0) quadrant = 2;
		else if (x<0 && y<0) quadrant = 3;
		else quadrant = 4;
	}
	void show() {cout << "quadrant: " << quadrant << endl;}
	// quad operator=(coord obj);
	friend quad operator=(quad obj1, coord obj2);
};

/*
quad quad::operator=(coord obj) {
	this->x = obj.x;
	this->y = obj.y;

	if (x>=0 && y>=0) quadrant = 1;
	else if (x<0 && y>=0) quadrant = 2;
	else if (x<0 && y<0) quadrant = 3;
	else quadrant = 4;

	return *this;
}
*/


quad operator=(quad obj1, coord obj2) {
	obj1.x = obj2.x;
	obj1.y = obj2.y;

	if (obj1.x>=0 && obj1.y>=0) obj1.quadrant = 1;
	else if (obj1.x<0 && obj1.y>=0) obj1.quadrant = 2;
	else if (obj1.x<0 && obj1.y<0) obj1.quadrant = 3;
	else obj1.quadrant = 4;

	return obj1;
}



int main()
{
	quad o1(10,10), o2(15,3), o3;
	int x, y;

	o3 = o1 + o2;
	o3.get_xy(x,y);
	o3.show();
	cout << "o1 + o2 = (" << x << ", " << y << ")\n";

	o3 = o1 - o2;
	o3.get_xy(x,y);
	o3.show();
	cout << "o1 - o2 = (" << x << ", " << y << ")\n";

	o3 = o1;
	o3.get_xy(x,y);
	o3.show();
	cout << "o3 = o1 = (" << x << ", " << y << ")\n";
}