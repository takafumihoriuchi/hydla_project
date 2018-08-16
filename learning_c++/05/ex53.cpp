#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char *start, char **end, int base=10) {
	return strtol(start, end, base);
}

int main()
{
	// cout << mystrtol("123", "123") <<endl;

	long x;
	char *s1 = "100234";
	char *p;

	// cout << p << endl;

	x = mystrtol(s1, &p);
	cout << "基数10: " << x << endl;

	// cout << p << endl;

	return 0;
}