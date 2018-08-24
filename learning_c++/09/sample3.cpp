#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc!=3) {
		cout << "this is how you use this program: ./a.out <input-file> <output-file>\n";
		return 1;
	}

	ifstream myin(argv[1]);
	ofstream myout(argv[2]);

	if (!myin.is_open()) {
		cout << "failed to open input-file\n";
		return 1;
	}
	if (!myout.is_open()) {
		cout << "failed to open output-file\n";
		return 1;
	}

	char ch;

	myin.unsetf(ios::skipws);
	while (!myin.eof()) {
		myin >> ch;
		if (ch == ' ') ch = '|';
		myout << ch;
	}

	myin.close();
	myout.close();

	return 0;
}