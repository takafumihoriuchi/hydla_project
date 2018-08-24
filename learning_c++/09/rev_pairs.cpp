#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fl("pairs.txt", ios::in | ios::out | ios::binary);
	if (!fl) {cout << "failed to open file\n"; return 1;}

	long i = 0;
	char cha, chb;
	fl.seekp(0, ios::beg);
	while (!fl.eof()) {
		
		if (!fl.good() && !fl.eof()) {
			cout << "i/o error ... terminating\n";
			return 1;
		}

		fl.get(cha);
		fl.get(chb);
		fl.seekp(i, ios::beg);
		fl.put(chb);
		fl.put(cha);
		i += 2;
	}

	fl.close();
	return 0;	
}