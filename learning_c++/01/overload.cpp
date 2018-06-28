#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a+b;
}

double sum(double a, double b) {
	return a+b;
}

int main(void)
{
	cout << "input two numbers (of type int): ";
	int ai, bi;
	cin >> ai >> bi;
	cout << sum(ai,bi);

	cout << "input two numbers (of type double): ";
	double a, b;
	cin >> a >> b;
	cout << sum(a,b);

	return 0;
}