#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("poem");
	if (!fin) {cout << "failed to open\n"; return 1;}

	// prepare counting array
	int count[26];
	int i;
	for (i=0; i<26; i++) count[i] = 0;

	// read file and count
	char c;
	while (!fin.eof()) {
		c = fin.get();
		if (!fin.good() && !fin.eof()) return 1;
		if (!isalpha(c)) continue;
		int idx = (int)tolower(c) - 97;
		count[idx]++;
	}

	for (i=0; i<26; i++) {
		cout.width(3);
		cout << (char)(i+97);
	}
	cout << endl;

	for (i=0; i<26; i++) {
		cout.width(3);
		cout << count[i];
	}
	cout << endl;	

	return 0;
}