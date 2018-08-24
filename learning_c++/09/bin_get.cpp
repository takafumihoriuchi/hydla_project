#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	if (argc != 2) {
		cout << "usage: ./a.out <input-file>" << endl;
		return 1;
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	if (!fin) {
		cout << "failed to open " << argv[1] << endl;
		return 1;
	}

	while (!fin.eof()) {
		fin.get(ch);
		cout << ch;
	}

	fin.close();

	return 0;
}