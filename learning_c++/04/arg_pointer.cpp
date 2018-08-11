#include <iostream>
using namespace std;

// ポインタ仮引数
void f(int *n);

int main()
{
	int i = 0;
	f(&i);
	cout << "new value of i: " << i << endl;
	return 0;
}

void f(int *n)
{
	*n = 100;
}
