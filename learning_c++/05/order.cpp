#include <iostream>
using namespace std;

void order(int &a, int &b) {
	if (a > b) {
		int tmp = b;
		b = a;
		a = tmp;
	}
}

int main()
{
	int x=1, y=0;
	cout << x << ' ' << y << endl;
	order(x,y);
	cout << x << ' ' << y << endl;
	return 0;
}