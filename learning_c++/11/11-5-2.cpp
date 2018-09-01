#include <iostream>
#include <new>
using namespace std;

int main()
{
	/*
	int *p;
	p = malloc(sizeof(int));
	if (!p) {
		cout << "failed to allocate memory\n";
		exit(1);
	}
	*/

	int *q
	try {
		q = new int;
	} catch (bad_alloc xa) {
		cout << "failed to allcate memory\n";
		exit(1);
	}

	int *r;
	r = new (nothrow) int;
	if (!r) {
		cout << "failed to allcate memory\n";
		exit(1);
	}

}