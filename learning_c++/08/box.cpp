#include <iostream>
using namespace std;

class box {
	int size;
public:
	box(int s) {size = s;}
	friend ostream &operator<<(ostream &stream, box obj);
};

ostream &operator<<(ostream &stream, box obj) {
	for (int i=0; i<obj.size; i++) {
		for (int i=0; i<obj.size; i++) {
			stream << " *";
		}
		stream << '\n';
	}
	return stream;
}

int main()
{
	box a(20);
	cout << a;

	return 0;
}