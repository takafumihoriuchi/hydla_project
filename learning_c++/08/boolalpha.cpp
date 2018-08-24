#include <iostream>
using namespace std;

int main()
{
	bool b;

	cout << "BEFORE" << endl;
	b = true;
	cout << b << endl;
	b = false;
	cout << b << endl;

	cout << "AFTER" << endl;
	b = true;
	cout << boolalpha << b << endl;
	b = false;
	cout << b << endl;

	cout << "input a bool" << endl;
	cin >> b;
	cout << b << endl;

	return 0;
}