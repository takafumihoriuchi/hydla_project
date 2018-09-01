#include <iostream>
using namespace std;

template <typename type>
type my_min(type a, type b) {
	return (a < b) ? a : b;
}

int main()
{
	int ai=10, bi=7;
	cout << my_min(ai,bi) << endl;

	char ac='a', bc='b';
	cout << my_min(ac,bc) << endl;

	return 0;
}