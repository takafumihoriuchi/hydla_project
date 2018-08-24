#include <iostream>
#include <iomanip>
using namespace std;

/*
int main()
{
	cout.setf(ios::dec);
	cout << 100 << endl;
	cout.unsetf(ios::dec);

	cout.setf(ios::hex);
	cout << 100 << endl;
	cout.unsetf(ios::hex);

	cout.setf(ios::oct);
	cout << 100 << endl;

	return 0;
}
*/

int main()
{
	cout << dec << 100 << endl;

	cout << hex << 100 << endl;

	cout << oct << 100 << endl;

	return 0;
}
