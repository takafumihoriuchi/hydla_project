#include <iostream>
using namespace std;

template <typename type>
int find(type object, type *list, int size) {
	int i;
	for (i=0; i<size; i++) {
		if (list[i] == object) {
			return i;
		}
	}
	return -1;
}

int main()
{
	const int size = 5;
	int intarr[size] = {1,2,3,4,5};
	int object = 4;
	cout << find(object, intarr, size) << endl;

	const int size_c = 3;
	char chararr[size] = {'a', 'o', 'z'};
	char object_c = 'z';
	cout << find(object_c, chararr, size_c) << endl;	

	return 0;
}