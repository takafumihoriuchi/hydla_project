#include <iostream>
#include <fstream>
using namespace std;

void checkstatus(ifstream &in);

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "usage: ./a.out <file-name>\n";
		return 1;
	}

	ifstream in(argv[1]);
	if (!in) {
		cout << "failed to open file\n";
		return 1;
	}

	char c;
	while (in.get(c)) {
		cout << c;
		checkstatus(in);
	}
	checkstatus(in);
	
	in.close();
	return 0;
}

void checkstatus(ifstream &in) {
	ios::iostate i;
	i = in.rdstate();
	if (i & ios::eofbit) cout << "EOF was found\n";
	else if (i & ios::failbit) cout << "not so fatal error\n";
	else if (i & ios::badbit) cout << "fatal error\n";
}