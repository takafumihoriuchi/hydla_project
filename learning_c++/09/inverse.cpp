#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc!=2) {
		cout << "command: ./a.out <file-name>\n";
		return 1;
	}
	ifstream fin(argv[1], ios::in | ios::binary);
	if (!fin.is_open()) {
		cout << "failed to open file\n";
		return 1;
	}
	
/*
	fin.seekg(0, ios::end);
	long pos = ((int)fin.tellg() - 2);
	char ch;
	while (1) {
		fin.seekg(pos, ios::beg);
		fin.get(ch);
		cout << ch;
		pos--;
		if (pos<=0) break;
	}
*/

	char ch;
	long i;
	fin.seekg(0, ios::end);
	i = (long)fin.tellg();
	i -= 2;
	for (; i>=0; i--) {
		fin.seekg(i, ios::beg);
		fin.get(ch);
		cout << ch;
	}

	fin.close();
	return 0;
}

