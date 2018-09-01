#include <iostream>
using namespace std;

template <typename type1, typename type2>
void printargs(type1 a, type2 b) {
	cout << a << ' ' << b << endl;
	return;
}

int main()
{
	printargs(10, "hello");
	printargs(0.23, 10L);
	return 0;
}