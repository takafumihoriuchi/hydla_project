#include <iostream>
using namespace std;

// template <class X>
template <typename X>
void swapargs(X &a, X &b) {
	X temp;
	temp = b;
	b = a;
	a = temp;
}

// over-ride
void swapargs(int &a, int &b) {
	cout << "called the over-ridden function" << endl;
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
}

int main()
{
	int i=10, j=20;
	float x=10.1, y=23.3;

	cout << "before (i,j): " << i << ", " << j << endl << endl;
	cout << "before (x,y): " << x << ", " << y << endl << endl;

	swapargs(i, j);
	swapargs(x, y);

	cout << "after (i,j): " << i << ", " << j << endl << endl;
	cout << "after (x,y): " << x << ", " << y << endl << endl;

	return 0;
}