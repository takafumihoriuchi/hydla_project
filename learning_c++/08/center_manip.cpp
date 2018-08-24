#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void center(char *s);

int main()
{
	center((char *)"HELLO");
	return 0;
}

void center(char *s) {

	const int W = 80;

	int len = strlen(s);
	int num_space = W/2 - len/2;

	char *swspace = new char [W/2 + len/2];
	int i, j;
	for (i=0; i<num_space; i++)
		swspace[i] = ' ';
	for (j=0; j<len; i++, j++) {
		swspace[i] = s[j];
	}
	swspace[i] = '\0';

	/*
	cout.setf(ios::left);
	cout.width(W);
	cout.fill(' ');
	cout << swspace << endl;
	*/
	cout << left << setw(W) << setfill(' ') << swspace << endl;
}

/*
output sample:
                                      HELLO                                     
*/
