#include <iostream>
using namespace std;

class coord {
public:
	int x, y;
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
};

ostream &operator<<(ostream &stream, coord obj) {
	stream << "(" << obj.x << "," << obj.y << ")";
	return stream;
}

int main()
{
	coord a(1,1), b;
	cout << a << endl << b << endl;
	return 0;
}