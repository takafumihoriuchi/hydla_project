#include <iostream>
using namespace std;

int f(int a, int b) {
	return a+b;
}

int f(int a, int &b) {
	return a-b;
}

int main()
{
	int x=1, y=2;
	cout << f(x, 2) << endl;
	return 0;
}