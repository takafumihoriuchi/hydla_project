#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("check02_in.txt");
	if (!fin) {cout << "failed to open input file\n"; return 1;}

	ofstream fout("check02_out.txt");
	if (!fout) {cout << "failed to open output file\n"; return 1;}

	char ch;
	while (1) {
		ch = fin.get();
		if (fin.eof()) break;
		if (ch == '\t') {
			for (int i=0; i<4; i++) {
				fout << ' ';
			}
		} else {
			fout << ch;
		}
	}

	fin.close();
	fout.close();

	return 0;
}