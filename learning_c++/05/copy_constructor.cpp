#include <iostream>
#include <cstdlib>
using namespace std;

class array {
	int *p;
	int size;
public:
	array(int sz);
	~array();
	array(const array &a);
	void put(int idx, int val);
	int get(int idx);
};

array::array(int sz) {
	p = new int [sz];
	if (!p) exit(1);
	size = sz;
	cout << "using REGULAR constructor\n";
}

array::~array() {
	delete [] p;
}

array::array(const array &a) {
	size = a.size;
	p = new int [a.size];
	if (!p) exit(1);
	int i;
	// for (i=0; i<a.size; i++) p[i] = a.p[i];
	for (i=0; i<a.size; i++) p[i] = i;
	cout << "using COPY constructor\n";
}

void array::put(int idx, int val) {
	if (idx >= 0 && idx < this->size) p[idx] = val;
}

int array::get(int idx) {
	return p[idx];
}


int main()
{
	int i;

	array num(10);
	for (i = 0; i < 10; i++) num.put(i, i*2+1);
	for (i = 0; i < 10; i++) cout << num.get(i) << ' ';
	cout << endl;
	
	array x = num;
	x.put(5, 0);
	num.put(6, 0);
	for (i = 0; i < 10; i++) cout << x.get(i) << ' ';
	cout << endl;

	return 0;
}
