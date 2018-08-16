#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *str, int count=0);

int main()
{
	char s1[] = "Jyoshiochi!";
	char s2[] = "I like C++ because its cool!";

	reverse(s1);
	reverse(s2, 7);

	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}

void reverse(char *str, int count) {
	int i, j;
	char tmp;
	if (!count) count = strlen(str) - 1;
	for (i=0, j=count; i<j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}