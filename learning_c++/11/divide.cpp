#include <iostream>
using namespace std;

double divide(double a, double b) {
	try {
		if (!b) throw b;
	}
	catch (double) {
		cout << "can't divide by 0" << endl;
		exit(1);
	}
	return a / b;
}

int main()
{
	cout << divide(10.2, 2.0) << endl;
	cout << divide(10.2, 0.0) << endl;
	return 0;
}