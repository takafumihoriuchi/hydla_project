#include <iostream>
using namespace std;

ostream &sci(ostream &stream) {
	// stream << scientific;
	// stream << uppercase;
	stream.setf(ios::scientific || ios::uppercase);
	return stream;
}

int main()
{
	cout << sci << 203.41 << endl;
	return 0;
}