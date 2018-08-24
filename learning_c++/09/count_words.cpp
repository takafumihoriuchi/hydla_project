#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "proper way to use this program: ./a.out <input-file-name>" << endl;
		return 1; 
	}

	ifstream fin(argv[1]);
	if (!fin) {
		cout << "failed to open " << argv[1] << endl;
		return 1;
	}

	char c;
	int word_count = 0;
	fin.unsetf(ios::skipws);
	while (1) {
		fin >> c;
		if (fin.eof()) break;
		if (c==' ' || c=='\n') word_count++;
	}

	cout << "number of words: " << word_count << endl;

	fin.close();
	
	return 0;
}