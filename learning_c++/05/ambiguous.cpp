// this program cannot be compiled

#include <iostream>
using namespace std;

float f(float i) {
	return i / 2.0;
}

double f(double i) {
	return i / 2.0;
}

int main()
{
	float x = 10.09;
	double y = 10.09;
	cout << f(x);
	cout << f(y);
	cout << f(19);
	return 0;
}