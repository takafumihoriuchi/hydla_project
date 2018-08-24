#include <iostream>
#include <cstring>
using namespace std;

class date {
	char d[9]; // " mm/dd/yy "
public:
	// 挿入子と抽出子を記述
	friend ostream &operator<<(ostream &stream, date obj);
	friend istream &operator>>(istream &stream, date &obj);
};

ostream &operator<<(ostream &stream, date obj) {
	stream << obj.d;
	return stream;
}

istream &operator>>(istream &stream, date &obj) {
	cout << "mm/dd/yy : ";
	stream >> obj.d;
	return stream;
}

int main()
{
	date a;
	cin >> a;
	cout << a << endl;

	return 0;
}