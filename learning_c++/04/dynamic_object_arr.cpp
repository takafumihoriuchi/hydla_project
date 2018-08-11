#include <iostream>
using namespace std;

class samp {
	int i, j;
public:
	void set_ij(int a, int b) { i=a; j=b; }
	int get_product() { return i*j; }
};

int main()
{
	samp *p;
	int i;

	p = new samp [10];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		return 1;
	}

	for (i=0; i<10; i++) {
		p[i].set_ij(i, i+1);
	}

	for (i=0; i<10; i++) {
		cout << "product of p[" << i << "]: " << p[i].get_product() << endl;
	}

	delete [] p;

	return 0;
}