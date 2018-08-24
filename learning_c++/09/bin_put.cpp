#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "usage: ./a.out <output-file>" << endl;
		return 1;
	}

	ofstream fout(argv[1], ios::out | ios::binary);
	if (!fout) {
		cout << "failed to open " << argv[1] << endl;
		return 1;
	}

	cout << "quit with \'$\'" << endl;
	char ch = ' ';
	while (ch != '$') {
		// cin >> ch;
		cin.get(ch);
		// fout << ch;
		fout.put(ch);
	}
	
	fout.close();

	return 0;
}