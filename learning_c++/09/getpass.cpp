#include <iostream>
#include <cstring>
using namespace std;

istream &getpass(istream &stream) {
	cout << '\a';
	cout << "enter password: ";
	return stream;
}

int main()
{
	char pw[80];
	do {
		cin >> getpass >> pw;
	} while (strcmp(pw, "password"));

	return 0;
}
