#include <iostream>
#include <iomanip>
using namespace std;

ostream &tabs(ostream &stream) {
	stream << "\t\t\t";
	stream.width(20);
	// stream.setf(ios::left);
	return stream;
}

int main()
{
	cout << tabs << "helloworld!" << endl;
	return 0;
}