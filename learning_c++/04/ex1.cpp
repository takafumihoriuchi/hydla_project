#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *p;
	p = (char *)malloc(100);
	strcpy(p, "This is a test");
	cout << p << endl;

	/*
	char *p;
	p = new char [100];

	p[0] = 'T';
	p[1] = 'h';
	p[2] = 'i';
	p[3] = 's';
	p[4] = ' ';
	p[5] = 'i';
	p[6] = 's';
	p[7] = ' ';
	p[8] = 'a';
	p[9] = ' ';
	p[10] = 't';
	p[11] = 'e';
	p[12] = 's';
	p[13] = 't';

	int i;
	for (i=0; i<14; i++) {
		cout << p[i];
	}
	cout << endl;
	*/

	return 0;
}