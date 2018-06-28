#include <iostream>
using namespace std;

int sum(int a, int b);

int main(void)
{
	int a, b, c;

	cout << "input two numbers: ";
	cin >> a >> b;
	c = sum(a, b);
	cout << "sum: " << c << endl;

	return 0;
}

int sum(int a, int b) {
	return (a + b);
}
