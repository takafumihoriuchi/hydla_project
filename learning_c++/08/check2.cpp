#include <iostream>
#include <iomanip>
using namespace std;

/*
int main()
{
	double num = 1000.5364;
	cout.width(20);
	cout.precision(2);
	cout.fill('*');
	cout.setf(ios::left | ios::fixed);
	cout << num << endl;

	return 0;
}
*/

int main()
{
	double num = 1000.5364;
	cout << setw(20) << setprecision(2) << setfill('*') << fixed << left << num << endl;

	return 0;
}