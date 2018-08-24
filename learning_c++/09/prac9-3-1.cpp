#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream myin("original_copy");
	if (!myin.is_open()) {
		cout << "failed to open input file.\n";
		return 1;
	}

	ofstream myout("duplicated_copy");
	if (!myout.is_open()) {
		cout << "failed to open output file.\n";
		return 1;
	}

	char ch;
	int count = 0;
	myin.unsetf(ios::skipws);
	while (!myin.eof()) {
		myin.get(ch);
		myout.put(ch);
		count++;
	}

	cout << "number of characters: " << count << endl;

	myin.close();
	myout.close();
	return 0;
}