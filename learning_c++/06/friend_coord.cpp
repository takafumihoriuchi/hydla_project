#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	void get_xy(int &a, int &b) {a=x; b=y;}
	friend coord operator+(coord ob1, coord ob2);
	friend coord operator+(int num, coord ob2);
	friend coord operator+(coord ob1, int num);
	friend coord operator++(coord &ob);
	friend coord operator++(coord &ob, int nouse);
	friend coord operator--(coord &ob);
	friend coord operator--(coord &ob, int nouse);
	friend coord operator-(coord ob1, coord ob2);
	friend coord operator/(coord ob1, coord ob2);
	friend coord operator*(int num, coord ob2);
	friend coord operator*(coord ob1, int num);
};

coord operator/(coord ob1, coord ob2) {
	coord tmp;
	tmp.x = ob1.x / ob2.x;
	tmp.y = ob1.y / ob2.y;
	return tmp;
}

coord operator-(coord ob1, coord ob2) {
	coord tmp;
	tmp.x = ob1.x - ob2.x;
	tmp.y = ob1.y - ob2.y;
	return tmp;
}

coord operator++(coord &ob) {
	ob.x++;
	ob.y++;
	return ob;
}

coord operator++(coord &ob, int nouse) {
	ob.x++;
	ob.y++;
	return ob;
}

coord operator--(coord &ob) {
	ob.x--;
	ob.y--;
	return ob;
}

coord operator--(coord &ob, int nouse) {
	ob.x--;
	ob.y--;
	return ob;
}

coord operator+(coord ob1, coord ob2) {
	coord tmp;
	tmp.x = ob1.x + ob2.x;
	tmp.y = ob1.y + ob2.y;
	return tmp;
}

coord operator+(int num, coord ob2) {
	coord tmp;
	tmp.x = num + ob2.x;
	tmp.y = num + ob2.y;
	return tmp;
}

coord operator+(coord ob1, int num) {
	coord tmp;
	tmp.x = ob1.x + num;
	tmp.y = ob1.y + num;
	return tmp;
}

coord operator*(int num, coord ob2) {
	coord tmp;
	tmp.x = num * ob2.x;
	tmp.y = num * ob2.y;
	return tmp;
}

coord operator*(coord ob1, int num) {
	coord tmp;
	tmp.x = ob1.x * num;
	tmp.y = ob1.y * num;
	return tmp;
}

int main()
{
	coord o1(10,10), o2(5,3), o3;
	int x, y;

	o3 = o1 / o2;
	o3.get_xy(x,y);
	cout << "o1 / o2 = (" << x << "," << y << ")\n";

	o3 = o1 - o2;
	o3.get_xy(x,y);
	cout << "o1 - o2 = (" << x << "," << y << ")\n";

	o3 = 7 + o1;
	o3.get_xy(x,y);
	cout << "o3 = 7 + o1 = (" << x << "," << y << ")\n";

	o3++;
	o3.get_xy(x,y);
	cout << "o3++ = (" << x << "," << y << ")\n";

	++o3;
	o3.get_xy(x,y);
	cout << "++o3 = (" << x << "," << y << ")\n";

	o3--;
	o3.get_xy(x,y);
	cout << "o3-- = (" << x << "," << y << ")\n";

	--o3;
	o3.get_xy(x,y);
	cout << "--o3 = (" << x << "," << y << ")\n";

	o3 = 7 * o1;
	o3.get_xy(x,y);
	cout << "o3 = 7 * o1 = (" << x << "," << y << ")\n";

	o3 = o1 * 7;
	o3.get_xy(x,y);
	cout << "o3 = o1 * 7 = (" << x << "," << y << ")\n";

	return 0;
}
