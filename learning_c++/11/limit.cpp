#include <iostream>
using namespace std;

void Xhandler(int test) throw(int, char, double) {
	if (test == 1) throw test;
	if (test == 2) throw 'a';
	if (test == 3) throw 12.3;
	cout << "catch me" << endl;
}

int main() {
	try {
		Xhandler(1);
		Xhandler(2);
	}
	catch (int i) {
		cout << "captured int: " << i << endl;
	}
	catch (char c) {
		cout << "captured char: " << c << endl;
	}
	catch (double d) {
		cout << "captured double: " << d << endl;
	}

	return 0;
}