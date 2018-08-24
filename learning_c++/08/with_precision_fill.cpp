#include <iostream>
using namespace std;

int main()
{
	cout.width(10);
	cout << "hello" << "\n";
	
	cout.fill('%');
	cout.width(10);
	cout << "hello" << "\n";
	
	cout.setf(ios::left);
	cout.width(10);
	cout << "hello" << "\n";

	
	cout.width(10);
	cout.precision(10);
	cout << 123.456789 << endl;

	cout.width(10);
	cout.precision(6);
	cout << 123.456789 << endl;


	return 0;
}