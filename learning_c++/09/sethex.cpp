#include <iostream>
using namespace std;

ostream &sethex(ostream &stream) {
	stream.unsetf(ios::dec);
	stream.setf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}

ostream &reset(ostream &stream) {
	stream.unsetf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}


int main()
{
	cout << sethex << 20 << " " << reset << 20 << endl;
	return 0;
}
