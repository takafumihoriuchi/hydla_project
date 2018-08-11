#include <iostream>
using namespace std;

void neg_pointer(int *n) {
	*n *= -1;
}

void neg_reference(int &n) {
	n *= -1;
}

int main()
{
	// pointer
	int p = -7;
	cout << "pointer: from " << p;
	neg_pointer(&p);
	cout << " to " << p << endl;

	// reference
	int r = -7;
	cout << "reference: from " << r;
	neg_reference(r);
	cout << " to " << r << endl;

	return 0;
}