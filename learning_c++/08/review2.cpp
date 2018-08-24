#include <iostream>
using namespace std;

class base {
	int i, j;
public:
	base(int a, int b) {i = a; j = b;}
	void show_ij() {cout << i << " " << j << endl;}
};

class derived : public base {
	int k;
public:
	derived(int a, int b, int c) : base(a,b) {k=c;}
	void show() {cout << k << " "; show_ij();}
};


int main()
{
	derived obj(1,2,3);
	obj.show();
	return 0;
}