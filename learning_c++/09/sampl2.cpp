#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "usage: ./a.out <file_name>" << endl;
		return 1;
	}

	ofstream myout(argv[1]);

	if (!myout) {
		cout << "failed to open " << argv[1] << endl;
		return 1;
	}

	char str[80];
	cout << "write letter string to disc. end with \'$\'" << endl;

	do {
		cout << ": ";
		cin >> str;
		myout << str << endl;
	} while (*str != '$');

	myout.close();

	return 0;
}