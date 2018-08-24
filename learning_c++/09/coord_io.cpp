#include <iostream>
#include <fstream>
using namespace std;

class coord {
	int x, y;
public:
	coord(int a, int b) {x=a; y=b;}
	friend ostream &operator<<(ostream &stream, coord obj) {
		stream << obj.x << ' ' << obj.y << '\n';
		return stream;
	}
	friend istream &operator>>(istream &stream, coord &obj) {
		stream >> obj.x >> obj.y;
		return stream;
	}
};

int main()
{
	ofstream out("testtest.txt");
	if (!out) {cout << "failed to open output file\n"; return 1;}
	coord o1(1,2), o2(3,4);
	out << o1 << o2;
	out.close();

	ifstream in("testtest.txt");
	if (!in) {cout << "failed to open input file\n"; return 1;}
	coord o3(0,0), o4(0,0);
	in >> o3 >> o4;
	cout << o3 << o4;
	in.close();

	return 0;
}