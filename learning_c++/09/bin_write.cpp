#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	ofstream fout("test", ios::out | ios::binary);
	if (!fout) {
		cout << "failed to open output-file\n";
		return 1;
	}

	double num = 100.45;
	char str[] = "This is a test";

	fout.write((char *) &num, sizeof(double));
	fout.write(str, strlen(str));

	fout.close();

	return 0;
}