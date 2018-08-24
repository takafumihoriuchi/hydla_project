#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("sample1");
	if (!fout) {
		cout << "failed to open output file" << endl;
		return 1;
	}
	fout << "Hello" << endl;
	fout << 100 << ' ' << hex << 100 << endl;
	fout.close();

	ifstream fin("sample1");
	if (!fin) {
		cout << "failed to open input file" << endl;
		return 1;
	}
	char str[80];
	int i;
	fin >> str >> i;

	cout << str << ' ' << i << endl;

	fin.close();

	return 0;
}