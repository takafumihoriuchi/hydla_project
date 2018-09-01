#include <iostream>
using namespace std;

int main()
{
	cout << "begging of program!\n";

	try {
		cout << "inside try block!\n";
		throw 10;
		cout << "this is ignored, right?\n";
	}
	// catch (int i) {
	catch (double i) {
		cout << "I gotcha! you are: " << i << endl;
	}

	cout << "ending program" << endl;

	return 0;
}