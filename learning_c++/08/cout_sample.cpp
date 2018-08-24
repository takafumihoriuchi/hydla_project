

#include <iostream>
using namespace std;

int main()
{
	cout << "\n";

	// default
	cout << 123.33 << " hello " << 100 << endl;
	cout << 10 << ' ' << -10 << endl;
	cout << 100.0 << "\n\n";

	// change format settings
	cout.unsetf(ios::dec); //最初に十進数をクリアする
	cout.setf(ios::hex | ios::scientific);
	cout << 123.33 << " hello " << 100 << endl;

	cout.setf(ios::showpos);
	cout << 10 << ' ' << -10 << endl;
	cout.setf(ios::showpoint | ios::fixed);
	cout << 100.0 << "\n\n";

	return 0;	
}