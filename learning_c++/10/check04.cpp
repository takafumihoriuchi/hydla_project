#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream out("check04_out.txt");
	if (!out) {cout << "falied to open file\n"; return 1;}

	out.seekp(234, ios::beg);
	out << "| <- here" << endl;

	out.close();

	return 0;
}