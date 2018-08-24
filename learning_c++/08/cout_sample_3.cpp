#include <iostream>
using namespace std;

void showflags();

int main()
{
	showflags();
	cout.setf(ios::oct | ios::showbase | ios::fixed);
	showflags();
	return 0;
}

void showflags()
{
	long f;

	f = cout.flags();

	cout << f << endl;
}