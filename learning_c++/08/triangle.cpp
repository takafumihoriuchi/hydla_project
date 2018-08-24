#include <iostream>
using namespace std;

class triangle {
	int height, base;
public:
	triangle(int h, int b) {height = h; base = b;}
	friend ostream &operator<<(ostream &stream, triangle obj);
};

ostream &operator<<(ostream &stream, triangle obj)
{
	int i, j, h, k;

	i = j = obj.base-1;
	for (h=obj.height-1; h; h--) {
		for (k=i; k; k--) {
			stream << ' ';
		}
		stream << '*';

		if (j != i) {
			for (k=j-i-1; k; k--) {
				stream << ' ';
			}
			stream << '*';
		}

		i--;
		stream << endl;
	}

	for (k=0; k < obj.base; k++) {
		stream << '*';
	}

	return stream;
}

int main()
{
	triangle t1(5,5), t2(10,10), t3(12,12);

	cout << t1;
	cout << endl << t2 << endl << t3 << endl;

	return 0;
}