#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	myclass() {x=0;}
	myclass(int n) {x=n;}
	int getx() {return x;}
	void setx(int n) {x=n;}
};

int main()
{
	myclass ob(10);

	myclass *p;
	p = new myclass[10];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		return 1;
	}

	for (int i=0; i<10; i++)
		p[i] = ob;
	for (int i=0; i<10; i++)
		cout << "p[" << i << "]: " << p[i].getx() << endl;

	return 0;
}