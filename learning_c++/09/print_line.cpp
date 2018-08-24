#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("poem");
	if (!fin) {cout << "failed to open poem\n"; return 1;}
	char p[80];
	while (!fin.eof()) {
		fin.getline(p, 79);
		cout << p << endl;
	}
	fin.close();

	return 0;
}