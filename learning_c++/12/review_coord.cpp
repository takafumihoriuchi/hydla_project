
/****************
 ***わかんない。***
 ****************/

#include <iostream>
#include <fstream>
using namespace std;

template <typename type>
class coord {
	type x, y;
public:
	coord(type i, type j) { this->x = i; this->y = j; }
	template <typename type> friend ostream &operator<<(ostream &stream, coord obj);
	template <typename type> friend istream &operator>>(istream &stream, coord &obj);
};

template <typename type>
ostream &operator<<(ostream &stream, coord obj) {
	stream << obj.x << ' ' << obj.y << endl;
	return stream;
}

template <typename type>
istream &operator>>(istream &stream, coord &obj) {
	stream >> obj.x >> obj.y;
	return stream;
}

int main()
{
	coord<int> o1(1,2);
	coord<double> o2(3.3,4.4);
	ofstream out("test");
	if (!out) {cout << "failed to open file\n"; return 1;}
	out << o1 << o2;
	out.close();

	ifstream in("test");
	if (!in) {cout << "failed to open file\n"; return 1;}
	coord<int> o3(0,0);
	coord<double> o4(0,0);
	in >> o3 >> o4;
	cout << o3 << o4;
	in.close();

	return 0;
}