#include <iostream>
#include <cstdlib>
using namespace std;

class dynarray {
	int *p;
	int size;
public:
	dynarray(int s);
	~dynarray() {delete [] p;}
	int &put(int i);
	int get(int i);
	dynarray &operator=(dynarray &ob);
	int &operator[](int i);
};

dynarray::dynarray(int s) {
	p = new int [s];
	if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	size = s;
}

int &dynarray::put(int i) {
	if (i < 0 || i > size-1) {cout << "index out of boundary\n"; exit(1);}
	return p[i];
}

int dynarray::get(int i) {
	if (i < 0 || i > size-1) {cout << "index out of boundary\n"; exit(1);}
	return p[i];
}

dynarray &dynarray::operator=(dynarray &ob) {
	int i;
	if (size != ob.size) {cout << "size not matching\n"; exit(1);}
	for (i=0; i<size; i++) {p[i] = ob.p[i];}
	return *this;
}

int &dynarray::operator[](int i) {
	if (i < 0 || i > size) {cout << "index out of range\n"; exit(1);}
	return p[i];
}

int main()
{
	dynarray arr1(3), arr2(3);
	arr1.put(1) = 77;
	cout << arr1.get(1) << endl;

	arr2 = arr1;
	cout << arr2.get(1) << endl;

	dynarray arr(10);
	int i;
	for (i=0; i<10; i++) {
		arr[i] = i;
	}
	for (i=0; i<10; i++) {
		arr[i] = arr[i] * 2;
	}
	for (i=0; i<10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}