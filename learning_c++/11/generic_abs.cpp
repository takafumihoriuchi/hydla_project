#include <iostream>
#include <cstdlib>
using namespace std;

template <typename type>
type gen_abs(type x) {
	return (x < (type)0) ? -x : x;
}

int main()
{
	cout << gen_abs(4) << endl;
	cout << gen_abs(-4.1) << endl;
	cout << gen_abs(0) << endl;

	return 0;
}