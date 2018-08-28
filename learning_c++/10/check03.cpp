#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define WL 20 // maximum word-length

int main(int argc, char *argv[])
{
	if (argc != 3) {
		cout << "uages: ./a.out <input-flie> <searching-word>\n";
		return 1;
	}

	ifstream fin(argv[1]);
	if (!fin) {cout << "falied to open " << argv[1] << endl; return 1;}

	char key[WL];
	strcpy(key, argv[2]);
	char word[WL];
	int count = 0;
	while (1) {
		// fin.get(word, WL, ' ');
		fin >> word;
		if (fin.eof()) break;
		if (!strcmp(word, key)) count++;
	}
	cout << "number of \"" << argv[2] << "\": " << count << endl;

	fin.close();

	return 0;
}