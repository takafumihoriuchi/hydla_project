#include <iostream>
using namespace std;

const int SIZE = 5;

class arraytype {
	int a[SIZE];
public:
	arraytype();
	int &operator[](int i);
};

arraytype::arraytype() {
	int i;
	for (i=0; i<SIZE; i++) a[i] = i;
}

int &arraytype::operator[](int i) {
	if (i < 0 || i > SIZE) {
		cout << "index out of range\n";
		exit(1);
	}
	return a[i];
}

int main()
{
	arraytype ob;
	int i;

	for (i=0; i<SIZE; i++)
		cout << ob[i] << " ";
	cout << endl;

	for (i=0; i<SIZE; i++)
		ob[i] = ob[i] + 10;

	for (i=0; i<SIZE; i++)
		cout << ob[i] << " ";
	cout << endl;

	cout << ob[100];

	return 0;
}