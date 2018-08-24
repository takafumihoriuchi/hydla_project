#include <iostream>
using namespace std;

int main()
{
	cout << 777 << endl;
	cout.setf(ios::showpos);
	cout << 777 << endl;
	cout.unsetf(ios::showpos);

	cout << 108.22 << endl;
	cout.setf(ios::showpoint | ios::scientific | ios::uppercase);
	cout << 108.22 << endl;

	ios::fmtflags f;
	f = cout.flags();

	cout.unsetf(ios::dec);
	cout.setf(ios::showbase | ios::hex);
	cout << 100 << endl;

	cout.flags(f);
	cout << 100 << endl;

	return 0;
}