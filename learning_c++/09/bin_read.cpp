#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("test", ios::in | ios::binary);

	if (!fin) {
		cout << "入力ファイルが開けません\n";
		return 1;
	}

	double num;
	char str[80];

	fin.read((char *) &num, sizeof(double));
	fin.read(str, 14);
	str[14] = '\0';
	cout << num << ' ' << str << endl;

	fin.close();

	return 0;
}