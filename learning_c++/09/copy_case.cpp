#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	ifstream fin("poem");
	if (!fin) {cout << "failed to open poem.\n"; return 1;}
	ofstream fout("poem_inv_case");
	if (!fout) {cout << "failed to open destination file of poem copy.\n"; return 1;}

	char c;

	while (!fin.eof()) {
		c = fin.get();

		if (isalpha(c)) {
			if (islower(c)) {
				fout.put(toupper(c));
			} else if (isupper(c)) {
				fout.put(tolower(c));
			}
		} else {
			fout.put(c);
		}
		
	}

	fin.close();
	fout.close();
	return 0;
}