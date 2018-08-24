#include <iostream>
using namespace std;

class coord {
	int x, y;
public:
	coord() {x=0; y=0;}
	coord(int a, int b) {x=a; y=b;}
	friend ostream &operator<<(ostream &stream, coord obj) {
		stream << "(" << obj.x << "," << obj.y << ")";
		return stream;
	}
};

int main()
{
	coord a(1,1), b;
	cout << a << endl << b << endl;
	return 0;
}