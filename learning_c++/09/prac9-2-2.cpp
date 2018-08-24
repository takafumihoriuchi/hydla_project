#include <iostream>
#include <fstream>
using namespace std;

int phone()
{
	ofstream fout("phone");
	if (!fout) {
		cout << "failed to open phone file\n";
		return 1;
	}

	fout << "Issac Newton, 415 555-3423\nRobert Goddard, 213 555-3245\nEnrico Fermi, 304 555-1453\n";
	fout.close();

	return 0;
}

int main()
{
	return phone();
}