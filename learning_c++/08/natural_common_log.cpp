#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double x;
	cout.precision(4);
	cout << "\n      x   natural common\n\n";

	for (x=2.0; x<=100.0; x++) {
		cout.width(7);
		cout << x << "  ";
		cout.width(7);
		cout << log(x) << " ";
		cout.width(7);
		cout << log10(x) << endl;
	}

	cout << endl;

	return 0;
}