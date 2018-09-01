#include <iostream>
using namespace std;

void Xhandler() {
	try {
		throw "hello";
	}
	catch (char const *) {
		cout << "Xhandler内で捕獲" << endl;
		throw;
	}
}

int main()
{
	try {
		Xhandler();
	}
	catch (...) {
		cout << "main内で捕獲" << endl;
	}
	return 0;
}