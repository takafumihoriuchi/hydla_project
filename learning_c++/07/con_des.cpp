#include <iostream>
using namespace std;

class base {
	int i;
public:
	base(int n) {
		cout << "called CONSTRUCTOR of base\n";
		i = n;
	}
	~base() {cout << "called DESTRUCTOR of base\n";}
	void show_i() {cout << i << endl;}
};

class derived : public base {
	int j;
public:
	derived(int n, int m) : base(m) {
		cout << "called CONSTRUCTOR of derived\n";
		j = n;
	}
	~derived() {cout << "called DESTRUCTOR of derived\n";}
	void show_j() {cout << j << endl;}
};


int main()
{
	derived obj(6,7);
	obj.show_i();
	obj.show_j();
	return 0;
}